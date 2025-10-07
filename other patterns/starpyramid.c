#include<stdio.h>
int main()
{   int i,j,k,n;
    printf("enter no. of rows:");
    scanf("%d",&n);
    
    int nst=1;
    for(i=1;i<=n;i++){
     for(j=1;j<=n-i;j++){ //nsp=nsp-1
        printf(" ");
     }  for(k=1;k<=nst;k++){
        printf("*");
     }
          nst = nst + 2;
            printf("\n");
    }    
          return 0;
}