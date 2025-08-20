#include <iostream>

double weighted_average(int array[], int n);

int main() {
    int data[] = {1, 2, 1, 4, 1, 3};
    std::cout << "Weighted Average: " << weighted_average(data, 6) << std::endl;
    return 0;
}