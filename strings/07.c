//to check that a given sub string exists or not in a main string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sub[50];

    printf("Enter main string: ");
    gets(str);

    printf("Enter substring to search: ");
    gets(sub);

    if (strstr(str, sub) != NULL)
        printf("Substring found!");
    else
        printf("Substring not found!");

    return 0;
}
