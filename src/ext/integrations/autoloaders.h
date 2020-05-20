#ifndef DD_INTEGRATIONS_AUTOLOADING_H
#define DD_INTEGRATIONS_AUTOLOADING_H
#define DD_AUTOLOADERS()                                                                                               \
    DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("ddtrace\\bootstrap", "flushtracershutdown", "DDTrace\\Bootstrap::tracerOnce"), \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(NULL, "header", "DDTrace\\Bootstrap::initRootSpan"),                        \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(NULL, "http_response_code", "DDTrace\\Bootstrap::initRootSpan"),            \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(NULL, "curl_exec",                                                          \
                                           "DDTrace\\Integrations\\Curl\\CurlSandboxedIntegration::init"),             \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\client", "__construct",                                                                    \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceClientMethod"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\client", "count",                                                                          \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceClientMethod"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\client", "delete",                                                                         \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceClientMethod"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\client", "exists",                                                                         \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceClientMethod"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\client", "explain",                                                                        \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceClientMethod"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\client", "get",                                                                            \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceClientMethod"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\client", "index",                                                                          \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceClientMethod"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\client", "scroll",                                                                         \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceClientMethod"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\client", "search",                                                                         \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceClientMethod"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\client", "update",                                                                         \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceClientMethod"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\serializers\\arraytojsonserializer", "serialize",                                          \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceSimpleMethod"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\serializers\\arraytojsonserializer", "deserialize",                                        \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceSimpleMethod"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\serializers\\everythingtojsonserializer", "serialize",                                     \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceSimpleMethod"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\serializers\\everythingtojsonserializer", "deserialize",                                   \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceSimpleMethod"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\serializers\\smartserializer", "serialize",                                                \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceSimpleMethod"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\serializers\\smartserializer", "deserialize",                                              \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceSimpleMethod"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "analyze",                                                  \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "clearcache",                                               \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "close",                                                    \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "create",                                                   \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "delete",                                                   \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "deletealias",                                              \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "deletemapping",                                            \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "deletetemplate",                                           \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "deletewarmer",                                             \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "exists",                                                   \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "existsalias",                                              \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "existstemplate",                                           \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "existstype",                                               \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "flush",                                                    \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "getalias",                                                 \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "getaliases",                                               \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "getfieldmapping",                                          \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "getmapping",                                               \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "getsettings",                                              \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "gettemplate",                                              \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "getwarmer",                                                \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "open",                                                     \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "optimize",                                                 \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "putalias",                                                 \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "putmapping",                                               \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "putsettings",                                              \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "puttemplate",                                              \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "putwarmer",                                                \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "recovery",                                                 \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "refresh",                                                  \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "segments",                                                 \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "snapshotindex",                                            \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "stats",                                                    \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "status",                                                   \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "updatealiases",                                            \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\indicesnamespace", "validatequery",                                            \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\catnamespace", "aliases",                                                      \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\catnamespace", "allocation",                                                   \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\catnamespace", "count",                                                        \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\catnamespace", "fielddata",                                                    \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\catnamespace", "health",                                                       \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\catnamespace", "help",                                                         \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\catnamespace", "indices",                                                      \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\catnamespace", "master",                                                       \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\catnamespace", "nodes",                                                        \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\catnamespace", "pendingtasks",                                                 \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\catnamespace", "recovery",                                                     \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\catnamespace", "shards",                                                       \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\catnamespace", "threadpool",                                                   \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\snapshotnamespace", "create",                                                  \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\snapshotnamespace", "createrepository",                                        \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\snapshotnamespace", "delete",                                                  \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\snapshotnamespace", "deleterepository",                                        \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\snapshotnamespace", "get",                                                     \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\snapshotnamespace", "getrepository",                                           \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\snapshotnamespace", "restore",                                                 \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\snapshotnamespace", "status",                                                  \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\clusternamespace", "getsettings",                                              \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\clusternamespace", "health",                                                   \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\clusternamespace", "pendingtasks",                                             \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\clusternamespace", "putsettings",                                              \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\clusternamespace", "reroute",                                                  \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\clusternamespace", "state",                                                    \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\clusternamespace", "stats",                                                    \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\nodesnamespace", "hotthreads",                                                 \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\nodesnamespace", "info",                                                       \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\nodesnamespace", "shutdown",                                                   \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\namespaces\\nodesnamespace", "stats",                                                      \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::traceNamespaceMethod"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "elasticsearch\\endpoints\\abstractendpoint", "performrequest",                                            \
            "DDTrace\\Integrations\\ElasticSearch\\V1\\ElasticSearchSandboxedIntegration::init"),                      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("illuminate\\database\\eloquent\\builder", "getmodels",                     \
                                           "DDTrace\\Integrations\\Eloquent\\EloquentSandboxedIntegration::init"),     \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("illuminate\\database\\eloquent\\model", "performinsert",                   \
                                           "DDTrace\\Integrations\\Eloquent\\EloquentSandboxedIntegration::init"),     \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("illuminate\\database\\eloquent\\model", "performupdate",                   \
                                           "DDTrace\\Integrations\\Eloquent\\EloquentSandboxedIntegration::init"),     \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("illuminate\\database\\eloquent\\model", "delete",                          \
                                           "DDTrace\\Integrations\\Eloquent\\EloquentSandboxedIntegration::init"),     \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("illuminate\\database\\eloquent\\model", "destroy",                         \
                                           "DDTrace\\Integrations\\Eloquent\\EloquentSandboxedIntegration::init"),     \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("illuminate\\database\\eloquent\\model", "refresh",                         \
                                           "DDTrace\\Integrations\\Eloquent\\EloquentSandboxedIntegration::init"),     \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("guzzlehttp\\client", "send",                                               \
                                           "DDTrace\\Integrations\\Guzzle\\GuzzleSandboxedIntegration::init"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("guzzlehttp\\client", "transfer",                                           \
                                           "DDTrace\\Integrations\\Guzzle\\GuzzleSandboxedIntegration::init"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("illuminate\\foundation\\application", "handle",                            \
                                           "DDTrace\\Integrations\\Laravel\\LaravelSandboxedIntegration::init"),       \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("illuminate\\routing\\router", "findroute",                                 \
                                           "DDTrace\\Integrations\\Laravel\\LaravelSandboxedIntegration::init"),       \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("illuminate\\routing\\route", "run",                                        \
                                           "DDTrace\\Integrations\\Laravel\\LaravelSandboxedIntegration::init"),       \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("symfony\\component\\httpfoundation\\response", "setstatuscode",            \
                                           "DDTrace\\Integrations\\Laravel\\LaravelSandboxedIntegration::init"),       \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("illuminate\\events\\dispatcher", "fire",                                   \
                                           "DDTrace\\Integrations\\Laravel\\LaravelSandboxedIntegration::init"),       \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("illuminate\\view\\view", "render",                                         \
                                           "DDTrace\\Integrations\\Laravel\\LaravelSandboxedIntegration::init"),       \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("illuminate\\view\\engines\\compilerengine", "get",                         \
                                           "DDTrace\\Integrations\\Laravel\\LaravelSandboxedIntegration::init"),       \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("illuminate\\foundation\\providerrepository", "load",                       \
                                           "DDTrace\\Integrations\\Laravel\\LaravelSandboxedIntegration::init"),       \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("illuminate\\console\\application", "__construct",                          \
                                           "DDTrace\\Integrations\\Laravel\\LaravelSandboxedIntegration::init"),       \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("symfony\\component\\console\\application", "renderexception",              \
                                           "DDTrace\\Integrations\\Laravel\\LaravelSandboxedIntegration::init"),       \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "memcached", "add", "DDTrace\\Integrations\\Memcached\\MemcachedSandboxedIntegration::traceCommand"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "memcached", "addbykey",                                                                                   \
            "DDTrace\\Integrations\\Memcached\\MemcachedSandboxedIntegration::traceCommandByKey"),                     \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "memcached", "append", "DDTrace\\Integrations\\Memcached\\MemcachedSandboxedIntegration::traceCommand"),   \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "memcached", "appendbykey",                                                                                \
            "DDTrace\\Integrations\\Memcached\\MemcachedSandboxedIntegration::traceCommandByKey"),                     \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "memcached", "decrement",                                                                                  \
            "DDTrace\\Integrations\\Memcached\\MemcachedSandboxedIntegration::traceCommand"),                          \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "memcached", "decrementbykey",                                                                             \
            "DDTrace\\Integrations\\Memcached\\MemcachedSandboxedIntegration::traceCommandByKey"),                     \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "memcached", "delete", "DDTrace\\Integrations\\Memcached\\MemcachedSandboxedIntegration::traceCommand"),   \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "memcached", "deletemulti",                                                                                \
            "DDTrace\\Integrations\\Memcached\\MemcachedSandboxedIntegration::traceMulti"),                            \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "memcached", "deletebykey",                                                                                \
            "DDTrace\\Integrations\\Memcached\\MemcachedSandboxedIntegration::traceCommandByKey"),                     \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "memcached", "deletemultibykey",                                                                           \
            "DDTrace\\Integrations\\Memcached\\MemcachedSandboxedIntegration::traceMultiByKey"),                       \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "memcached", "get", "DDTrace\\Integrations\\Memcached\\MemcachedSandboxedIntegration::traceCommand"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "memcached", "getmulti", "DDTrace\\Integrations\\Memcached\\MemcachedSandboxedIntegration::traceMulti"),   \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "memcached", "getbykey",                                                                                   \
            "DDTrace\\Integrations\\Memcached\\MemcachedSandboxedIntegration::traceCommandByKey"),                     \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "memcached", "getmultibykey",                                                                              \
            "DDTrace\\Integrations\\Memcached\\MemcachedSandboxedIntegration::traceMultiByKey"),                       \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "memcached", "set", "DDTrace\\Integrations\\Memcached\\MemcachedSandboxedIntegration::traceCommand"),      \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "memcached", "setmulti", "DDTrace\\Integrations\\Memcached\\MemcachedSandboxedIntegration::traceMulti"),   \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "memcached", "setbykey",                                                                                   \
            "DDTrace\\Integrations\\Memcached\\MemcachedSandboxedIntegration::traceCommandByKey"),                     \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "memcached", "setmultibykey",                                                                              \
            "DDTrace\\Integrations\\Memcached\\MemcachedSandboxedIntegration::traceMultiByKey"),                       \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "memcached", "increment",                                                                                  \
            "DDTrace\\Integrations\\Memcached\\MemcachedSandboxedIntegration::traceCommand"),                          \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "memcached", "incrementbykey",                                                                             \
            "DDTrace\\Integrations\\Memcached\\MemcachedSandboxedIntegration::traceCommandByKey"),                     \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "memcached", "prepend", "DDTrace\\Integrations\\Memcached\\MemcachedSandboxedIntegration::traceCommand"),  \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "memcached", "prependbykey",                                                                               \
            "DDTrace\\Integrations\\Memcached\\MemcachedSandboxedIntegration::traceCommandByKey"),                     \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "memcached", "replace", "DDTrace\\Integrations\\Memcached\\MemcachedSandboxedIntegration::traceCommand"),  \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "memcached", "replacebykey",                                                                               \
            "DDTrace\\Integrations\\Memcached\\MemcachedSandboxedIntegration::traceCommandByKey"),                     \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "memcached", "touch", "DDTrace\\Integrations\\Memcached\\MemcachedSandboxedIntegration::traceCommand"),    \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "memcached", "touchbykey",                                                                                 \
            "DDTrace\\Integrations\\Memcached\\MemcachedSandboxedIntegration::traceCommandByKey"),                     \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("memcached", "flush",                                                       \
                                           "DDTrace\\Integrations\\Memcached\\MemcachedSandboxedIntegration::init"),   \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("memcached", "cas",                                                         \
                                           "DDTrace\\Integrations\\Memcached\\MemcachedSandboxedIntegration::init"),   \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("memcached", "casbykey",                                                    \
                                           "DDTrace\\Integrations\\Memcached\\MemcachedSandboxedIntegration::init"),   \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(NULL, "mysqli_connect",                                                     \
                                           "DDTrace\\Integrations\\Mysqli\\MysqliSandboxedIntegration::init"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("mysqli", "__construct",                                                    \
                                           "DDTrace\\Integrations\\Mysqli\\MysqliSandboxedIntegration::init"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(NULL, "mysqli_real_connect",                                                \
                                           "DDTrace\\Integrations\\Mysqli\\MysqliSandboxedIntegration::init"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("mysqli", "real_connect",                                                   \
                                           "DDTrace\\Integrations\\Mysqli\\MysqliSandboxedIntegration::init"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(NULL, "mysqli_query",                                                       \
                                           "DDTrace\\Integrations\\Mysqli\\MysqliSandboxedIntegration::init"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(NULL, "mysqli_prepare",                                                     \
                                           "DDTrace\\Integrations\\Mysqli\\MysqliSandboxedIntegration::init"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(NULL, "mysqli_commit",                                                      \
                                           "DDTrace\\Integrations\\Mysqli\\MysqliSandboxedIntegration::init"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(NULL, "mysqli_stmt_execute",                                                \
                                           "DDTrace\\Integrations\\Mysqli\\MysqliSandboxedIntegration::init"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(NULL, "mysqli_stmt_get_result",                                             \
                                           "DDTrace\\Integrations\\Mysqli\\MysqliSandboxedIntegration::init"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("mysqli", "query",                                                          \
                                           "DDTrace\\Integrations\\Mysqli\\MysqliSandboxedIntegration::init"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("mysqli", "prepare",                                                        \
                                           "DDTrace\\Integrations\\Mysqli\\MysqliSandboxedIntegration::init"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("mysqli", "commit",                                                         \
                                           "DDTrace\\Integrations\\Mysqli\\MysqliSandboxedIntegration::init"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("mysqli_stmt", "execute",                                                   \
                                           "DDTrace\\Integrations\\Mysqli\\MysqliSandboxedIntegration::init"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("mysqli_stmt", "get_result",                                                \
                                           "DDTrace\\Integrations\\Mysqli\\MysqliSandboxedIntegration::init"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("pdo", "__construct",                                                       \
                                           "DDTrace\\Integrations\\PDO\\PDOSandboxedIntegration::init"),               \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("pdo", "exec",                                                              \
                                           "DDTrace\\Integrations\\PDO\\PDOSandboxedIntegration::init"),               \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("pdo", "query",                                                             \
                                           "DDTrace\\Integrations\\PDO\\PDOSandboxedIntegration::init"),               \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("pdo", "commit",                                                            \
                                           "DDTrace\\Integrations\\PDO\\PDOSandboxedIntegration::init"),               \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("pdo", "prepare",                                                           \
                                           "DDTrace\\Integrations\\PDO\\PDOSandboxedIntegration::init"),               \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("pdostatement", "execute",                                                  \
                                           "DDTrace\\Integrations\\PDO\\PDOSandboxedIntegration::init"),               \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("predis\\client", "__construct",                                            \
                                           "DDTrace\\Integrations\\Predis\\PredisSandboxedIntegration::init"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("predis\\client", "connect",                                                \
                                           "DDTrace\\Integrations\\Predis\\PredisSandboxedIntegration::init"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("predis\\client", "executecommand",                                         \
                                           "DDTrace\\Integrations\\Predis\\PredisSandboxedIntegration::init"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("predis\\client", "executeraw",                                             \
                                           "DDTrace\\Integrations\\Predis\\PredisSandboxedIntegration::init"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("predis\\pipeline\\pipeline", "executepipeline",                            \
                                           "DDTrace\\Integrations\\Predis\\PredisSandboxedIntegration::init"),         \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("slim\\app", "__construct",                                                 \
                                           "DDTrace\\Integrations\\Slim\\SlimSandboxedIntegration::init"),             \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("symfony\\component\\httpkernel\\httpkernel", "__construct",                \
                                           "DDTrace\\Integrations\\Symfony\\SymfonySandboxedIntegration::init"),       \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "zend_controller_plugin_broker", "predispatch",                                                            \
            "DDTrace\\Integrations\\ZendFramework\\ZendFrameworkSandboxedIntegration::init"),                          \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "zend_controller_plugin_broker", "postdispatch",                                                           \
            "DDTrace\\Integrations\\ZendFramework\\ZendFrameworkSandboxedIntegration::init"),                          \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS(                                                                            \
            "ci_router", "_set_routing",                                                                               \
            "DDTrace\\Integrations\\CodeIgniter\\V2\\CodeIgniterSandboxedIntegration::init"),                          \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("requests", "set_certificate_path",                                         \
                                           "DDTrace\\Integrations\\WordPress\\WordPressSandboxedIntegration::init"),   \
        DDTRACE_AUTLOAD_KNOWN_INTEGRATIONS("yii\\di\\container", "__construct",                                        \
                                           "DDTrace\\Integrations\\Yii\\YiiSandboxedIntegration::init")

#endif  // DD_INTEGRATIONS_AUTOLOADING_H
