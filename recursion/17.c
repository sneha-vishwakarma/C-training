// Q15: Find product of two numbers using recursion (without *)
#include <stdio.h>

int multiply(int a, int b) {
    if (b == 0)
        return 0;
    return a + multiply(a, b - 1);
}

int main() {
    int a = 5, b = 3;
    printf("Product = %d", multiply(a, b));
    return 0;
}
