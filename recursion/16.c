// Q14: Check if a number is prime using recursion
#include <stdio.h>

int isPrime(int n, int i) {
    if (n <= 2)
        return (n == 2);
    if (n % i == 0)
        return 0;
    if (i * i > n)
        return 1;
    return isPrime(n, i + 1);
}

int main() {
    int n = 17;
    if (isPrime(n, 2))
        printf("%d is Prime", n);
    else
        printf("%d is Not Prime", n);
    return 0;
}
