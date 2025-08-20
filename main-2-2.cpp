#include <iostream>

int max_element(int array[], int n);

int main() {
    int data[] = {3, 8, 1, 6, 7};
    std::cout << "Max: " << max_element(data, 5) << std::endl;
    return 0;
}