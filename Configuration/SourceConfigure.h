#if ENABLE_STRIPPING_SOURCE_FILERNAMES
#define __FILE_STRIPPED__ ""
#else
#define __FILE_STRIPPED__ __FILE__
#endif