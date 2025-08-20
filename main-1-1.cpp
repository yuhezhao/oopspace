#include<iostream>
int array_sum(int array[], int n);

int main() {
    int data[] = {1, 2, 3, 4, 5};
    std::cout << "Sum: " << array_sum(data, 5) << std::endl;
    return 0;
}