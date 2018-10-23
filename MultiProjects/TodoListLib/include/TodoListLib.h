
#if defined(WIN32) || defined(_WIN32)
#ifdef TodoListLib_EXPORTS
#define TodoListLib_API __declspec(dllexport)
#else
#define TodoListLib_API __declspec(dllimport)
#endif
#else
#define TodoListLib_API
#endif