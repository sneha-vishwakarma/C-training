//non repeating characters of string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, count;

    printf("Enter a string: ");
    gets(str);  // user input

    printf("Non-repeating characters are: ");
    for (i = 0; i < strlen(str); i++) {
        count = 0;
        for (j = 0; j < strlen(str); j++) {
            if (str[i] == str[j] && i != j) {
                count++;
                break;
            }
        }
        if (count == 0)
            printf("%c ", str[i]);
    }

    return 0;
}
