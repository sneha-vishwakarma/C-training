//hollow ractangle
#include<stdio.h>
int main()
 {  
    int i,j,n = 6;
     for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
        
     if(i==1 || i==6 || j==1 || j==6){
        printf("*");
     } 
       else
        printf(" ");
    }
       printf("\n");
    }
      return 0;
 }
 

