// Q7: Reverse a number using recursion
#include <stdio.h>

int reverseNumber(int n, int rev) {
    if (n == 0)
        return rev;
    return reverseNumber(n / 10, rev * 10 + (n % 10));
}

int main() {
    int n = 1234;
    printf("Reversed = %d", reverseNumber(n, 0));
    return 0;
}
