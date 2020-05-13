#ifndef DDTRACE_HANDLERS_COMMON_H
#define DDTRACE_HANDLERS_COMMON_H

#include <php.h>

#include "engine_api.h"

void ddtrace_handlers_common_rshutdown(void);

inline ZEND_RESULT_CODE ddtrace_cached_ce_lookup(zend_class_entry **ce_proxy, const char *name, size_t name_len) {
    if (*ce_proxy) {
        return SUCCESS;
    }

    *ce_proxy = ddtrace_lookup_ce(name, name_len);
    return *ce_proxy ? SUCCESS : FAILURE;
}

ZEND_RESULT_CODE ddtrace_GlobalTracer_get(zval *result);

#endif  // DDTRACE_HANDLERS_COMMON_H
