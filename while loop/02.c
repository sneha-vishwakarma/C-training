//factorial
#include <stdio.h>
int main() {
    int n, fact = 1;
    printf("Enter number: ");
    scanf("%d", &n);

    int i = 1;
    do {
        fact *= i;
        i++;
    } while(i <= n);

    printf("Factorial = %d", fact);
    return 0;
}
