//right triangle
#include<stdio.h>
int main()
 {  
    int i,j,n=4;
    for(i='A';i<=n;i++){
        for(j='A';j<=i;j++){
            printf("%c",j);
        }
       printf("\n");
    }
      return 0;
 }