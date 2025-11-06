// Q16: Print array elements in reverse order using recursion
#include <stdio.h>

void printReverse(int arr[], int n) {
    if (n == 0)
        return;
    printf("%d ", arr[n - 1]);
    printReverse(arr, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    printReverse(arr, n);
    return 0;
}
