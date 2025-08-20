#include <iostream>

double array_mean(int array[], int n);

int main() {
    int data[] = {2, 4, 6, 8};
    std::cout << "Mean: " << array_mean(data, 4) << std::endl;
    return 0;
}