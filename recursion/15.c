// Q13: Find sum of array elements using recursion
#include <stdio.h>

int sumArray(int arr[], int n) {
    if (n == 0)
        return 0;
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    printf("Sum = %d", sumArray(arr, n));
    return 0;
}
