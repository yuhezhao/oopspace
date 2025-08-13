#ifndef WORKSHOP_H
#define WORKSHOP_H

#include <iostream>
#include <cstddef>

// Part 2
inline void changeValue(double* p) {
    if (p) *p = 42.0;
}

// Part 3
inline void printArray(const double* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << (i + 1 == size ? '\n' : ' ');
    }
}

// Part 4
inline double arrayMax(const double* arr, int size) {
    if (size <= 0 || arr == nullptr) return 0.0; // 容错
    double m = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > m) m = arr[i];
    }
    return m;
}

// Part 5/7 动态数组
inline double* dynamicArray(int N) {
    if (N <= 0) return nullptr;
    double* a = new double[N];
    for (int i = 0; i < N; ++i) a[i] = static_cast<double>(i); // 用下标初始化
    return a;
}

inline double* dynamicArray(int N, double M) {
    if (N <= 0) return nullptr;
    double* a = new double[N];
    for (int i = 0; i < N; ++i) a[i] = M; // 全部填充为 M
    return a;
}

#endif // WORKSHOP_H