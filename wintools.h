#pragma once


#ifdef  _WIN32

#include <malloc.h>

#define aligned_alloc(alignment,size) _aligned_malloc(size, alignment)
#define aligned_free(ptr)			  _aligned_free(ptr)

#else

// just simple  
#define aligned_free(ptr) free(ptr)

#endif

template<typename T1, typename T2>
union  TypeSplit {
	// big value type like __m256i or __m256d
	T1 v;
	// slices of big type into small type like  __int64_t or double
	T2 s[sizeof(T1) / sizeof(T2)];
};


inline double* unpack(__m256d& v)
{
	// attempt to avoid memory copy
	auto u = reinterpret_cast<TypeSplit<__m256d, double>*> (const_cast<__m256d*>(&v));
	return u->s;
}

inline const double* unpack(const __m256d& v)
{
	auto u = reinterpret_cast<TypeSplit<__m256d, double>*> (const_cast<__m256d*>(&v));
	return u->s;
}

inline double* unpack(__m512d& v)
{
	// attempt to avoid memory copy
	auto u = reinterpret_cast<TypeSplit<__m512d, double>*> (const_cast<__m512d*>(&v));
	return u->s;
}

inline const double* unpack(const __m512d& v)
{
	// attempt to avoid memory copy
	auto u = reinterpret_cast<TypeSplit<__m512d, double>*> (const_cast<__m512d*>(&v));
	return u->s;
}
