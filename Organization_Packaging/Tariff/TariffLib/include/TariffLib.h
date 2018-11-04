
#if defined(WIN32) || defined(_WIN32)
#ifdef TariffLib_EXPORTS
#define TariffLib_API __declspec(dllexport)
#else
#define TariffLib_API __declspec(dllimport)
#endif
#else
#define TariffLib_API
#endif