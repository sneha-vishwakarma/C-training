// Q1: Print numbers from 1 to N using recursion
#include <stdio.h>

void print1toN(int n) {
    if (n == 0)
        return; // base case
    print1toN(n - 1); // recursive call
    printf("%d ", n);
}

int main() {
    int n = 5;
    print1toN(n);
    return 0;
}
