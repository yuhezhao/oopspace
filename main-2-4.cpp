#include <iostream>
using namespace std;

int array_min(int integers[], int length);
int array_max(int integers[], int length);
int sum_min_max(int integers[], int length);

int main() {
    int a[] = {3, -1, 7, 0, 5};
    cout << array_min(a, 5) << "\n";      // -1
    cout << array_max(a, 5) << "\n";      // 7
    cout << sum_min_max(a, 5) << "\n";    // 6
    return 0;
}