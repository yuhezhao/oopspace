#include <iostream>

bool is_ascending(int array[], int n);

int main() {
    int a[] = {1, 2, 2, 4, 5};
    std::cout << "Is ascending (a): " << is_ascending(a, 5) << std::endl;
    return 0;
}