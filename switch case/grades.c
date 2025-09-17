#include<stdio.h>
int main()
{
    char grade;
    printf("enter grade(A,B,C,D,F):");
    scanf("%c",&grade);

    switch(grade)
    {
       case'A':
       printf("excellent\n");
       break;
       case'B':
       printf("well done\n");
       break;
       case'C':
       printf("good\n");
       break;
       case'D':
       printf("you passed\n");
       break;
       case'F':
       printf("try again\n");
       break;
       default:
       printf("invalid grade\n");
    }
       return 0;
}