#include <iostream>
#include <string>
using namespace std;

// Signature: void print_binary_str(std::string decimal_number)
void print_binary_str(string decimal_number) {
    if (decimal_number.length() < 1 || decimal_number.length() > 9) return;

    int num = stoi(decimal_number); 
    if (num == 0) { cout << "0\n"; return; }

    string binary;
    while (num > 0) {
        binary = char('0' + (num % 2)) + binary;
        num /= 2;
    }
    cout << binary << "\n";
}
