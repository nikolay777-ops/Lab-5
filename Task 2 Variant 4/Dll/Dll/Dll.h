#pragma once

#ifdef MATHLIBRARY_EXPORTS
#define MATHLIBRARY_API __declspec(dllexport)
#else
#define MATHLIBRARY_API __declspec(dllimport)
#endif

extern "C" MATHLIBRARY_API int Count1(int num, double A[], int n, int i);
extern "C" MATHLIBRARY_API int Count2(int num, double A[], int n, int i);
