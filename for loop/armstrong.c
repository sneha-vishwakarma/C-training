//armstrong number check
#include <stdio.h>
int main() 
{
    int n, sum=0, d, temp;
    printf("Enter a 3-digit number: ");
    scanf("%d", &n);
    temp = n;
    for(; n>0; n=n/10) {
        d = n % 10;
        sum = sum + (d*d*d);
    }
    if(sum == temp)
        printf("Armstrong number");
    else
        printf("Not Armstrong");
    return 0;
}
