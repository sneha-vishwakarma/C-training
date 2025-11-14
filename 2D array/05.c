// CODE 5: 2D array me maximum element dhundna

#include <stdio.h>

int main() {
    int arr[2][3] = {
        {10,25,30},
        {45,15,5}
    };

    int maxVal = arr[0][0];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
            }
        }
    }

    printf("Maximum element = %d", maxVal);
}
