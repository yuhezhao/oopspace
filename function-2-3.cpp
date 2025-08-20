bool is_palindrome(int integers[], int length) {
    if (length <= 0) return false; // 题目里空数组定义为回文？题干示例说是回文，但签名要求<=0返回false
    for (int i = 0; i < length / 2; i++) {
        if (integers[i] != integers[length - 1 - i]) return false;
    }
    return true;
}

int sum_array_elements(int integers[], int length) {
    if (length <= 0) return -1;
    int s = 0;
    for (int i = 0; i < length; i++) s += integers[i];
    return s;
}

int sum_if_palindrome(int integers[], int length) {
    if (length <= 0) return -1;
    if (!is_palindrome(integers, length)) return -2;
    return sum_array_elements(integers, length);
}