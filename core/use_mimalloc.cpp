#if !defined(DEBUG_ENABLED) && !defined(MIMALLOC_DISABLED)
    // Including this in a single source files makes all new/delete calls use mimalloc
    #include <thirdparty/mimalloc/mimalloc-new-delete.h>
#endif