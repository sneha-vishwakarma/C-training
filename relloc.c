#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, i, n, newSize;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // allocate memory using malloc
    ptr = (int*) malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &ptr[i]);

    printf("You entered: ");
    for(i = 0; i < n; i++)
        printf("%d ", ptr[i]);

    // now increase size
    printf("\n\nEnter new size: ");
    scanf("%d", &newSize);

    ptr = (int*) realloc(ptr, newSize * sizeof(int));

    printf("Enter %d more elements:\n", newSize);
    for(i = 0; i < newSize; i++)
        scanf("%d", &ptr[i]);

    printf("New array elements are: ");
    for(i = 0; i < newSize; i++)
        printf("%d ", ptr[i]);

    // free memory
    free(ptr);

    return 0;
}
