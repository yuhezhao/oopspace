#include <iostream>

bool is_fanarray(int array[], int n);

int main() {
    int a[] = {1, 2, 3, 2, 1};
    int b[] = {1, 2, 1, 2, 1};
    std::cout << is_fanarray(a, 5) << std::endl;  
    std::cout << is_fanarray(b, 5) << std::endl;  
    return 0;
}