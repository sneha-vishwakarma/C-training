 //reverse number
 #include <stdio.h>
int main() 
{
    int n, rev=0, d;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(; n>0; n=n/10) {
        d = n % 10;
        rev = rev*10 + d;
    }

    printf("Reverse = %d", rev);
    return 0;
}
