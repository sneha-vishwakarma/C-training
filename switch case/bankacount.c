 #include <stdio.h>

int main() {
    float balance = 1000, deposit, withdraw;

    // Deposit
    printf("Enter amount to deposit: ");
    scanf("%f", &deposit);
    balance += deposit;
    printf("Deposited successfully! New Balance = %.2f\n", balance);

    // Withdraw
    printf("Enter amount to withdraw: ");
    scanf("%f", &withdraw);
    if(withdraw <= balance) {
        balance -= withdraw;
        printf("Withdraw successful! New Balance = %.2f\n", balance);
    } else {
        printf("Insufficient Balance!\n");
    }

    // Show final balance
    printf("Final Balance = %.2f\n", balance);

    return 0;
}
