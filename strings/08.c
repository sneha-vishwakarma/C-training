//sort a string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, j;

    printf("Enter a string: ");
    gets(str);

    // simple bubble sort
    for(i = 0; i < strlen(str) - 1; i++) {
        for(j = i + 1; j < strlen(str); j++) {
            if(str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("Sorted string: %s", str);

    return 0;
}
