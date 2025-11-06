// Q6: Find sum of digits of a number using recursion
#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int n = 1234;
    printf("Sum of digits = %d", sumOfDigits(n));
    return 0;
}
