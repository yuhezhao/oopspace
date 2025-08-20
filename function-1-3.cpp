#include<iostream>
using namespace std;
 void count_digits(int array[4][4])
 {
    int count[10] = {0}; // Array to hold counts of digits 0-9
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(array[i][j] >= 0 && array[i][j] <= 9) // Check if the number is a digit
            {
                count[array[i][j]]++; // Increment the count for that digit
            }
        }
    }
    for (int k = 0; k < 10; k++) {
        cout << k << ":" << count[k] << ";";
    }
    cout << "\n";
 }
