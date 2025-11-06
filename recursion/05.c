// Q3: Find sum of first N natural numbers using recursion
#include <stdio.h>

int sumN(int n) {
    if (n == 0)
        return 0; // base case
    return n + sumN(n - 1); // recursive case
}

int main() {
    int n = 5;
    printf("Sum = %d", sumN(n));
    return 0;
}
