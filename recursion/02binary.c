// Q18: Convert a number to binary using recursion
#include <stdio.h>

// Recursive function to print binary
void toBinary(int n) {
    if (n == 0)
        return; // base case — jab number 0 ho jaye to stop

    toBinary(n / 2); // pehle higher bits (divide by 2)
    printf("%d", n % 2); // phir remainder print karo (0 or 1)
}

int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    if (n == 0)
        printf("Binary = 0");
    else {
        printf("Binary of %d = ", n);
        toBinary(n);
    }

    return 0;
}
