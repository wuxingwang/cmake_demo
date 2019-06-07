#ifndef CMAKE_FEI_EVEN_H
#define CMAKE_FEI_EVEN_H
#ifdef _WIN32
	#if LIBEVEN_BUILD
		#define LIBEVEN_API __declspec(dllexport)
	#else
		#define LIBEVEN_API __declspec(dllimport)
	#endif
#else
	#define LIBEVEN_API
#endif
LIBEVEN_API int mathfei_is_even(int number);
//static library is simple as normal c code.
#endif
