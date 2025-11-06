// Q5: Find x^y (power) using recursion
#include <stdio.h>

int power(int x, int y) {
    if (y == 0)
        return 1;
    return x * power(x, y - 1);
}

int main() {
    int x = 2, y = 5;
    printf("%d^%d = %d", x, y, power(x, y));
    return 0;
}
