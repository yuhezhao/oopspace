#include<iostream>
int num_count(int array[], int n, int number);
int main(){
    int data[]={1, 2, 3, 4, 5};
    std::cout << "Count of 5: " << num_count(data, 5, 5) << std::endl;
    return 0;
}