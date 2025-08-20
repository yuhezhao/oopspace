#include <iostream>
using namespace std;

bool is_palindrome(int integers[], int length);
int sum_array_elements(int integers[], int length);
int sum_if_palindrome(int integers[], int length);

int main() {
    int p1[] = {1, 2, 3, 2, 1};  // 回文
    int p2[] = {2, 4, 4, 2};     // 回文
    int np[] = {1, 2, 1, 2, 1};  // 非回文

    cout << boolalpha << is_palindrome(p1, 5) << "\n"; // true
    cout << sum_if_palindrome(p1, 5) << "\n";          // 和

    cout << boolalpha << is_palindrome(np, 5) << "\n"; // false
    cout << sum_if_palindrome(np, 5) << "\n";          // -2

    cout << sum_array_elements(p2, 4) << "\n";         // 简单求和
    return 0;
}