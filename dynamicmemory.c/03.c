// Code 3: realloc() ka use karke memory badhana (resize karna)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n, newSize;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        arr[i] = i + 1;

    printf("Current elements: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nEnter new size: ");
    scanf("%d", &newSize);
    arr = (int*) realloc(arr, newSize * sizeof(int)); // resize memory

    for (int i = n; i < newSize; i++)
        arr[i] = i + 1;

    printf("New elements: ");
    for (int i = 0; i < newSize; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}
