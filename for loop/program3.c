// sum of 1-10
#include <stdio.h>
int main() {
    int i, sum=0;
    for(i=1; i<=10; i++) {
        sum = sum + i;
    }
    printf("Sum = %d", sum);
    return 0;
}
