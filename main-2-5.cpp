#include <iostream>

bool is_descending(int array[], int n);

int main() {
    int a[] = {9, 7, 6, 4, 1};
    std::cout << "Is descending (a): " << is_descending(a, 5) << std::endl;
    return 0;
}