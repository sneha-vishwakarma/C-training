//find the any normal kth element
#include <stdio.h>

int main() {
    int arr[100], n, k, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value of k: ");
    scanf("%d", &k);

    if(k > 0 && k <= n)
        printf("The %dth element is: %d\n", k, arr[k-1]);
    else
        printf("Invalid k!\n");

    return 0;
}
