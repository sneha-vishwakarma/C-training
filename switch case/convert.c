#include<stdio.h>

int main()
{
    int amount;
    printf("enter amount indian:");
    scanf("%d", &amount);

    char ch;
    printf("which you want to convert:");
    scanf(" %c",&ch);

    switch(ch)
    {
        case '$':
          printf("%2f",(float)amount/87);
          break;

          case'E':
          printf("in euros:%2f\n",(float)amount/90);
          break;
          //1 euro=90 INR
          default:
            printf("invalid choice!\n");
             break;
    }
    return 0;
}