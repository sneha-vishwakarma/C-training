#include<stdio.h>
int main()
{   
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    int candidate=n+1;//input k bad ka number se start
    while(1){
        int isprime=1;//assume prime
        for(int i=2;i*i<=candidate;i++){
            if(candidate%1== 0){
                isprime=0;//factor
                break;
           }

        }
          if(isprime){
            printf("next prime after %d is %d\n",n,candidate);
            break;//prime mil gya-loop end
          }
          candidate++;//wrna next number check
    } return 0;
}