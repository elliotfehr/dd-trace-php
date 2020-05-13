#include "handlers_common.h"

ZEND_TLS zend_class_entry *ddtrace_GlobalTracer_ce = NULL;
ZEND_TLS zend_function *ddtrace_GlobalTracer_get_fe = NULL;

extern inline ZEND_RESULT_CODE ddtrace_cached_ce_lookup(zend_class_entry **ce_proxy, const char *name, size_t name_len);

ZEND_RESULT_CODE ddtrace_GlobalTracer_get(zval *tracer) {
    // $tracer = \DDTrace\GlobalTracer::get();
    zend_class_entry **ce_proxy = &ddtrace_GlobalTracer_ce;
    zend_function **fn_proxy = &ddtrace_GlobalTracer_get_fe;
    return ddtrace_cached_ce_lookup(ce_proxy, ZEND_STRL("DDTrace\\GlobalTracer")) == SUCCESS &&
                   ddtrace_call_method(NULL, *ce_proxy, fn_proxy, ZEND_STRL("get"), tracer, 0, NULL) == SUCCESS
               ? SUCCESS
               : FAILURE;
}

void ddtrace_handlers_common_rshutdown(void) {
    ddtrace_GlobalTracer_ce = NULL;
    ddtrace_GlobalTracer_get_fe = NULL;
}
