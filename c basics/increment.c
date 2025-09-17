#include<stdio.h>
int main(){
    int num = 5;
    printf("num++ = %d(post decrement\n)",num++);//print first then increase
    printf("now num++ = %d\n", num++);
    printf("++num = %d(pre increment)\n",++num);//increase then print 
    printf("now num = %d\n\n,num");

    return 0;

}