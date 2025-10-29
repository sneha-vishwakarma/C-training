#include<stdio.h>
int main()
{
    int arr[4]={1,2,4,5};
    int xor1=0;
    int xor2=0;
    for(int i=1;i<=4;i++) 
        xor1=xor1^i;
     for(int i=0;i<4;i+0)
        xor2=xor2^arr[i];
    
     int uni=xor1^xor2;
    printf("%d",uni);
}