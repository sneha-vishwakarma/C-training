#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter size:");
    scanf("%d",&n);
    int *arr = (int*)malloc(n*sizeof(int));
    //int*arr=(int*)calloc(n , sizeof(int));
    printf("enter %d elements:\n",n);
    for(int i=0;i<n;i++)
     scanf("%d",&arr[i]);

     free(arr);

     //int j=0;
}