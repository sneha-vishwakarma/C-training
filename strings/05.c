//search substring that is palindrome
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int start, int end) {
    while (start < end) {
        if (str[start] != str[end])
            return 0; // not palindrome
        start++;
        end--;
    }
    return 1; // palindrome
}

int main() {
    char str[100];
    int len, i, j;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    printf("Palindrome substrings are:\n");
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            if (isPalindrome(str, i, j)) {
                // print substring
                for (int k = i; k <= j; k++)
                    printf("%c", str[k]);
                printf("\n");
            }
        }
    }

    return 0;
}
