#include "pch.h"
#include "MathOperations.h"

extern "C" MATH_API int Add(int a, int b) {
    return a + b;
}

extern "C" MATH_API int Subtract(int a, int b) {
    return a - b;
}

extern "C" MATH_API int Multiply(int a, int b) {
    return a * b;
}