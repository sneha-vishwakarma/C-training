// Q2: Print numbers from N to 1 using recursion
#include <stdio.h>

void printNto1(int n) {
    if (n == 0)
        return;
    printf("%d ", n);
    printNto1(n - 1);
}

int main() {
    int n = 5;
    printNto1(n);
    return 0;
}
