int binary_to_int(int binary_digits[], int number_of_digits) {
    if (number_of_digits < 1 || number_of_digits > 30) return -1;

    int value = 0;
    for (int i = 0; i < number_of_digits; i++) {
        int b = binary_digits[i];
        if (b != 0 && b != 1) return -1;
        value = value * 2 + b; // MSB 在 index 0
    }
    return value;
}