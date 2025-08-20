#include<iostream>
using namespace std;
int is_identity(int array[10][10])
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (i == j && array[i][j] != 1)
                return 0; // Not an identity matrix
            if (i != j && array[i][j] != 0)
                return 0; // Not an identity matrix
        }
    }
    return 1; // It is an identity matrix
}