#include <iostream>  
using namespace std;

int main() {
    int number;           
    string binary = "";   

    cout << "Please enter a decimal number:";
    cin >> number;       

    if (number == 0) {
        binary = "0";     
    } else {
        while (number > 0) {
            int remainder = number % 2;               
            binary = char(remainder + '0') + binary; 
            number = number / 2;                      
        }
    }

    cout << "The corresponding binary code is:" << binary << endl;  
    return 0;  
}
