#include <iostream>
#include <bitset>
using namespace std;


int binaryAdd(int a, int b) {
    return a + b;
}


int binarySubtract(int a, int b) {
    return a - b;
}


int binaryRightShift(int a) {
    return a >> 1;
}


int binaryLeftShift(int a) {
    return a << 1;
}

void printBinary(int num) {
    cout << "decimalism:" << num << ", binary system: " << bitset<16>(num) << endl;
}

int main() {
    int a = 0b111011101011; 
    int b = 0b11;           

    cout << " a："; printBinary(a);
    cout << "a + b："; printBinary(binaryAdd(a, b));
    cout << "a + a："; printBinary(binaryAdd(a, a));
    cout << "a - b："; printBinary(binarySubtract(a, b));
    cout << "a >> 1："; printBinary(binaryRightShift(a));
    cout << "a << 1："; printBinary(binaryLeftShift(a));

    return 0;
}
