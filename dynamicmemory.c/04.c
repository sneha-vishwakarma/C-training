// Code 4: malloc() ka use karke string input lena
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *name;
    int size;

    printf("Enter length of name: ");
    scanf("%d", &size);

    name = (char*) malloc(size * sizeof(char));

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Hello, %s!\n", name);

    free(name);
    return 0;
}
