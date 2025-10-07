#include<stdio.h>
int main()
   {
    int n;
    printf("enter no. of rows:");
    scanf("%d",&n);
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        
      for(int q=1;q<=nsp;q++){ //spaces k liye loop
          printf(" ");
        }
        nsp--;
     for(int j=1;j<=i;j++){  // number triangle
      printf("%d",j);
        }
     int a = i-1; //extra variable
     for(int k=1;k<=i;k++){
     printf("%d",a); //for last loop repeating decreasing numbers
     a--;
     } 
       printf("\n");
      } 
       return 0;
   }