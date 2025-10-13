// to calculate that which letter come the most times
#include<stdio.h>
#include<string.h>
int main()
{   
    char str[]="aaaaabf";
    int ln= strlen(str);
    int freq[256] = {0};
    char result;
    int max=0;

    for(int i=0;i<ln;i++){
        freq[str[i]]++;
    } for(int i=0;i<ln;i++){
        if(freq[str[i]>max]);
        result=str[i];
    }  printf("%c->%d",result,max);
    return 0;
}