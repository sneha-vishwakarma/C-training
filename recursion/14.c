// Q12: Find maximum element in an array using recursion
#include <stdio.h>

int findMax(int arr[], int n) {
    if (n == 1)
        return arr[0];
    int max = findMax(arr, n - 1);
    return (arr[n - 1] > max) ? arr[n - 1] : max;
}

int main() {
    int arr[] = {2, 8, 5, 1, 9};
    int n = 5;
    printf("Maximum = %d", findMax(arr, n));
    return 0;
}
