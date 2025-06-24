#include <stdio.h>

float checkBalance(float balance) {
    printf("Your current balance is: ₹%.2f\n", balance);
    return balance;
}

float deposit(float balance) {
    float amount;
    printf("Enter amount to deposit: ₹");
    scanf("%f", &amount);

    if (amount > 0) {
        balance += amount;
        printf("₹%.2f deposited successfully.\n", amount);
    } else {
        printf("Invalid amount.\n");
    }

    return balance;
}

float withdraw(float balance) {
    float amount;
    printf("Enter amount to withdraw: ₹");
    scanf("%f", &amount);

    if (amount > 0 && amount <= balance) {
        balance -= amount;
        printf("₹%.2f withdrawn successfully.\n", amount);
    } else {
        printf("Insufficient funds or invalid amount.\n");
    }

    return balance;
}

int main() {
    float balance = 1000.0f; // Starting balance
    int choice;

    do {
        printf("\n===== Welcome to Bro Bank =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance = deposit(balance);
                break;
            case 3:
                balance = withdraw(balance);
                break;
            case 4:
                printf("Thank you for banking with us!\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 4);

    return 0;
}
