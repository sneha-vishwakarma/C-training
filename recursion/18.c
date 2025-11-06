// Q17: Print all subsets of a string using recursion
#include <stdio.h>
#include <string.h>

void printSubsets(char *str, char *curr, int i, int j) {
    if (i == strlen(str)) {
        curr[j] = '\0';
        printf("%s\n", curr);
        return;
    }

    // include current character
    curr[j] = str[i];
    printSubsets(str, curr, i + 1, j + 1);

    // exclude current character
    printSubsets(str, curr, i + 1, j);
}

int main() {
    char str[] = "abc", curr[10];
    printSubsets(str, curr, 0, 0);
    return 0;
}
