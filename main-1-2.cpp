#include<iostream>
using namespace std;
int is_identity(int array[10][10]);
int main() {
    int matrix[10][10] = {
        {1,0,0,0,0,0,0,0,0,0},
        {0,1,0,0,0,0,0,0,0,0},
        {0,0,1,0,0,0,0,0,0,0},
        {0,0,0,1,0,0,0,0,0,0},
        {0,0,0,0,1,0,0,0,0,0},
        {0,0,0,0,0,1,0,0,0,0},
        {0,0,0,0,0,0,1,0,0,0},
        {0,0,0,0,0,0,0,1,0,0},
        {0,0,0,0,0,0,0,0,1,0},
        {0,0,0,0,0,0,0,0,0,1}
    };

    int result = is_identity(matrix);
    if (result == 1)
        cout << "The matrix is an identity matrix." << endl;
    else
        cout << "The matrix is NOT an identity matrix." << endl;

    return 0;
}