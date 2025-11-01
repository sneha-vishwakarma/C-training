#include<stdio.h>
int palindrome(int arr[],int i, int j)
{
    if(i>=j){
        return 1;
    }
    if (arr[i]!=arr[j]){
        return 0;
    }
    return palindrome(arr,++i,--j);

}
  int main(){
  int a[3]={1,2,1};
  int startindex=0;
  int 
  }