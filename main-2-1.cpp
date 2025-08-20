#include <iostream>

int min_element(int array[], int n);

int main() {
    int data[] = {4, 2, 7, 1, 9};
    std::cout << "Min: " << min_element(data, 5) << std::endl;
    return 0;
}