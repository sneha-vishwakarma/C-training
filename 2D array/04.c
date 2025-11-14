// CODE 4: 2D array ko column-wise print karna

#include <stdio.h>

int main() {
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    printf("Column-wise print:\n");

    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
