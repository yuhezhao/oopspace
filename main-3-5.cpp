#include <iostream>

double sum_even(double array[], int n);

int main() {
    double data[] = {1.5, 2.5, 3.0, 4.0, 5.5};
    std::cout << "Sum of even indices: " << sum_even(data, 5) << std::endl;
    return 0;
}