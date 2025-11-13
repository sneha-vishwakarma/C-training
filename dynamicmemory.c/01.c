// Code 1: malloc() ka use karke integer array allocate karna aur print karna
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));  // memory allocate
    if (arr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("You entered: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr); // memory free
    return 0;
}




