#include<iostream>
double weighted_average(int array[], int n) {
    if (n < 1) return 0.0;

    double total = 0.0;
    for (int i = 0; i < n; ++i) {
        int freq = 0;
        for (int j = 0; j < n; ++j) {
            if (array[j] == array[i]) ++freq;
        }
        total += array[i] * (static_cast<double>(freq) / n);
    }

    return total;
}