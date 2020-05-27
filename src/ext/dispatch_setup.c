// clang-format off
#include <php.h>
#include <Zend/zend.h>
#include <Zend/zend_closures.h>
#include <Zend/zend_exceptions.h>
// clang-format on

#include <ext/spl/spl_exceptions.h>

#include "arrays.h"
#include "compat_string.h"
#include "ddtrace.h"
#include "dispatch.h"

ZEND_EXTERN_MODULE_GLOBALS(ddtrace);

#if PHP_VERSION_ID >= 70000
static inline void dispatch_table_dtor(zval *zv) {
    zend_hash_destroy(Z_PTR_P(zv));
    efree(Z_PTR_P(zv));
}
#else
static inline void dispatch_table_dtor(void *zv) {
    HashTable *ht = *(HashTable **)zv;
    zend_hash_destroy(ht);
    efree(ht);
}
#endif

void ddtrace_dispatch_init(TSRMLS_D) {
    if (!DDTRACE_G(class_lookup)) {
        ALLOC_HASHTABLE(DDTRACE_G(class_lookup));
        zend_hash_init(DDTRACE_G(class_lookup), 8, NULL, (dtor_func_t)dispatch_table_dtor, 0);
    }

    if (!DDTRACE_G(function_lookup)) {
        ALLOC_HASHTABLE(DDTRACE_G(function_lookup));
        zend_hash_init(DDTRACE_G(function_lookup), 8, NULL, (dtor_func_t)ddtrace_class_lookup_release_compat, 0);
    }
}

void ddtrace_dispatch_destroy(TSRMLS_D) {
    if (DDTRACE_G(class_lookup)) {
        zend_hash_destroy(DDTRACE_G(class_lookup));
        FREE_HASHTABLE(DDTRACE_G(class_lookup));
        DDTRACE_G(class_lookup) = NULL;
    }

    if (DDTRACE_G(function_lookup)) {
        zend_hash_destroy(DDTRACE_G(function_lookup));
        FREE_HASHTABLE(DDTRACE_G(function_lookup));
        DDTRACE_G(function_lookup) = NULL;
    }
}

void ddtrace_dispatch_reset(TSRMLS_D) {
    if (DDTRACE_G(class_lookup)) {
        zend_hash_clean(DDTRACE_G(class_lookup));
    }
    if (DDTRACE_G(function_lookup)) {
        zend_hash_clean(DDTRACE_G(function_lookup));
    }
}

static HashTable *_get_lookup_for_target(zval *class_name, zval *function_name TSRMLS_DC) {
    HashTable *overridable_lookup = NULL;
    if (class_name && DDTRACE_G(class_lookup)) {
#if PHP_VERSION_ID < 70000
        // downcase the class name before lookup as class names are case insensitive.
        zval *class_name_prev = class_name;
        MAKE_STD_ZVAL(class_name);
        ZVAL_STRINGL(class_name, Z_STRVAL_P(class_name_prev), Z_STRLEN_P(class_name_prev), 1);
        ddtrace_downcase_zval(class_name);
        overridable_lookup =
            ddtrace_hash_find_ptr(DDTRACE_G(class_lookup), Z_STRVAL_P(class_name), Z_STRLEN_P(class_name));
        if (!overridable_lookup) {
            overridable_lookup = ddtrace_new_class_lookup(class_name TSRMLS_CC);
        }
        zval_ptr_dtor(&class_name);
        class_name = class_name_prev;
#else
        ddtrace_downcase_zval(class_name);
        overridable_lookup = zend_hash_find_ptr(DDTRACE_G(class_lookup), Z_STR_P(class_name));
        if (!overridable_lookup) {
            overridable_lookup = ddtrace_new_class_lookup(class_name TSRMLS_CC);
        }
#endif
    } else {
        if (DDTRACE_G(strict_mode)) {
            zend_function *function = NULL;
            if (ddtrace_find_function(EG(function_table), function_name, &function) != SUCCESS) {
                zend_throw_exception_ex(spl_ce_InvalidArgumentException, 0 TSRMLS_CC,
                                        "Failed to override function %s - the function does not exist",
                                        Z_STRVAL_P(function_name));
            }

            return NULL;
        }

        overridable_lookup = DDTRACE_G(function_lookup);
    }

    return overridable_lookup;
}

static void _initialize_dispatch(ddtrace_dispatch_t *dispatch, zval *function_name, zval *callable, uint32_t options) {
    memset(dispatch, 0, sizeof(ddtrace_dispatch_t));
    if (callable != NULL) {
        dispatch->callable = *callable;
        zval_copy_ctor(&dispatch->callable);
    } else {
        ZVAL_NULL(&dispatch->callable);
    }
#if PHP_VERSION_ID < 70000
    ZVAL_STRINGL(&dispatch->function_name, Z_STRVAL_P(function_name), Z_STRLEN_P(function_name), 1);
#else
    ZVAL_STRINGL(&dispatch->function_name, Z_STRVAL_P(function_name), Z_STRLEN_P(function_name));
#endif
    ddtrace_downcase_zval(&dispatch->function_name);  // method/function names are case insensitive in PHP
    ZVAL_NULL(&dispatch->autoload_function_name);

    dispatch->options = options;
}

zend_bool ddtrace_trace(zval *class_name, zval *function_name, zval *callable, uint32_t options TSRMLS_DC) {
    HashTable *overridable_lookup = _get_lookup_for_target(class_name, function_name TSRMLS_CC);
    if (overridable_lookup == NULL) {
        return FALSE;
    }

    ddtrace_dispatch_t dispatch;
    _initialize_dispatch(&dispatch, function_name, callable, options);

    if (ddtrace_dispatch_store(overridable_lookup, &dispatch)) {
        return TRUE;
    } else {
        ddtrace_dispatch_dtor(&dispatch);
        return FALSE;
    }
}

zend_bool ddtrace_autoload_via_function(zval class_name, zval function_name, zval autoload_function TSRMLS_DC) {
    HashTable *overridable_lookup = _get_lookup_for_target(&class_name, &function_name TSRMLS_CC);
    if (overridable_lookup == NULL) {
        return FALSE;
    }
    ddtrace_dispatch_t dispatch;
    _initialize_dispatch(&dispatch, &function_name, NULL, DDTRACE_DISPATCH_AUTOLOAD);
#if PHP_VERSION_ID < 70000
    ZVAL_STRINGL(&dispatch.autoload_function_name, Z_STRVAL(autoload_function), Z_STRLEN(autoload_function), 1);
#else
    ZVAL_STRINGL(&dispatch.autoload_function_name, Z_STRVAL(autoload_function), Z_STRLEN(autoload_function));
#endif

    if (ddtrace_dispatch_store(overridable_lookup, &dispatch)) {
        return TRUE;
    } else {
        ddtrace_dispatch_dtor(&dispatch);
        return FALSE;
    }
}
