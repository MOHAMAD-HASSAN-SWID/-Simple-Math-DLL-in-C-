//#pragma once
#ifdef MATHOPERATIONS_EXPORTS
#define MATH_API __declspec(dllexport)
#else
#define MATH_API __declspec(dllimport)
#endif

extern "C" {
    MATH_API int Add(int a, int b);
    MATH_API int Subtract(int a, int b);
    MATH_API int Multiply(int a, int b);
}