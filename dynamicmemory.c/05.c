// Code 5: 2D array dynamically allocate karna (matrix input aur print)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int **matrix, row, col;
    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &col);

    matrix = (int**) malloc(row * sizeof(int*));
    for (int i = 0; i < row; i++)
        matrix[i] = (int*) malloc(col * sizeof(int));

    printf("Enter matrix elements:\n");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &matrix[i][j]);

    printf("Matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    for (int i = 0; i < row; i++)
        free(matrix[i]);
    free(matrix);

    return 0;
}
