#include<stdio.h>
int main()
{
    int i,j,k,n; 
    printf("enter no. of rows:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
      for(j=1;j<=n+1-i;j++){
        printf(" ");
      } for(k=0;k<n;k++){
        printf("*");
      } 
      printf("\n");
    }
    return 0;
}