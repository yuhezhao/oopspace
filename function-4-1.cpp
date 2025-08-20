#include <iostream>
using namespace std;

int *readNumbers() {
    int *arr = new int[10];
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    return arr;
}

void printNumbers(int *numbers, int length) {
    for (int i = 0; i < length; i++) {
        cout << i << " " << numbers[i] << endl;
    }
}

int secondSmallestSum(int *numbers, int length) {
    

    int maxSubs = length * (length + 1) / 2;
    int *sums = new int[maxSubs];
    int count = 0;

    for (int i = 0; i < length; i++) {
        int sum = 0;
        for (int j = i; j < length; j++) {
            sum = sum + numbers[j];
            sums[count] = sum;
            count++;
        }
    }

    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (sums[j] > sums[j + 1]) {
                int temp = sums[j];
                sums[j] = sums[j + 1];
                sums[j + 1] = temp;
            }
        }
    }


    int second = sums[1];

    delete[] sums; 
    return second;
}