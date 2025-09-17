 //calculator
 #include <stdio.h>
int main() {
    int a,b;
    char op;
    printf("Enter two numbers and operator (+,-,*,/): ");
    scanf("%d %d %c", &a, &b, &op);

    if(op == '+')
        printf("Sum = %d\n", a+b);
    else if(op == '-')
        printf("Difference = %d\n", a-b);
    else if(op == '*')
        printf("Product = %d\n", a*b);
    else if(op == '/')
        printf("Division = %.2f\n", (float)a/b);
    else
        printf("Invalid operator\n");

    return 0;
}
