//multipication table of number
#include <stdio.h>
int main() {
    int n, i = 1;
    printf("Enter number: ");
    scanf("%d", &n);

    do {
        printf("%d x %d = %d\n", n, i, n*i);
        i++;
    } while(i <= 10);

    return 0;
}
