#include <iostream>
using namespace std;
#include "workshop.h"
int main() {
    // Part 1
    double d = 3.14;
    char   ch = 'A';
    double* pd = &d;
    char*   pc = &ch;
    cout << "Double via pointer: " << *pd << "\n";
    cout << "Char via pointer: "   << *pc << "\n";

    // Part 2
    changeValue(pd);
    cout << "After changeValue: " << d << "\n";

    // Part 3/4
    double a[5] = {1.2, 3.4, 2.2, 5.6, 4.5};
    cout << "Array: ";
    printArray(a, 5);
    cout << "Max: " << arrayMax(a, 5) << "\n";

    // Part 5/6/7/8
    double* dyn = dynamicArray(6, 7.5); // N=6, 每项=7.5
    cout << "Dynamic: ";
    printArray(dyn, 6);
    cout << "Dyn max: " << arrayMax(dyn, 6) << "\n";
    delete[] dyn;

    return 0;
}