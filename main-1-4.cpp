#include<iostream> 
int sum_two_arrays(int array[], int secondarray[], int n);
int main(){
    int data1[]={1,2,3};
    int data2[]={4,5,6};
    std::cout<<"Sum of two arrays: " << sum_two_arrays(data1, data2, 3) << std::endl;
    return 0;
}