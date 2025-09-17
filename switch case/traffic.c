 #include <stdio.h>

int main() {
    int choice;

    printf("Traffic Light Menu:\n");
    printf("1. Red\n");
    printf("2. Yellow\n");
    printf("3. Green\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("STOP! 🚦\n");
            break;
        case 2:
            printf("READY TO GO! ⚠️\n");
            break;
        case 3:
            printf("GO! ✅\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
