#include <iostream>

int median_array(int array[], int n);

int main() {
    int data[] = {5, 1, 3, 4, 2};
    std::cout << "Median: " << median_array(data, 5) << std::endl;
    return 0;
}