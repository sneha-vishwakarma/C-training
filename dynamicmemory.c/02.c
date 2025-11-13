// Code 2: calloc() ka use karke memory allocate karna (sab 0 se initialize hoti hai)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*) calloc(n, sizeof(int));  // calloc initialize 0 se karta hai
    if (arr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    printf("Array after calloc: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}
