#include<stdio.h>

int main()
{
    int a,b;
    char op;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("enter operator(+,-,*,/):");
    scanf(" %c",&op);

    switch(op)
    {
        case'+':
        printf("result=%d\n",a+b);
        break;

        case'-':
        printf("result=%d\n",a-b);
        break;

        case'*':
        printf("result=%d\n",a*b);
        break;

        case'/':
        if(b!=0)
          printf("result=%d\n",a/b);
        else
          printf("division by zero not allowed\n");
        break;

        default:
        printf("invalid choice\n");
        
    }
        return 0;
}