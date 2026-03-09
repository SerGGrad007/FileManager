#include "sum.h"

template<typename T>
T sum(T a, T b) {
    return a + b;
}

template<>
int sum(int a, int b) {
    return a + b;
}