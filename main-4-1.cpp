#include <iostream>
using namespace std;

int *readNumbers();
int secondSmallestSum(int *numbers,int length);

int main() {

    int *arr = readNumbers();

    int result = secondSmallestSum(arr, 10);
    cout << result << endl;

    delete[] arr;

    return 0;
}