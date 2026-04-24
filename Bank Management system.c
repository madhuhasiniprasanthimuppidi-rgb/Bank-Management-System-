#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Bank {
    int accNo;
    char name[50];
    float balance;
};

struct Bank customer;

void createAccount() {
    printf("\nEnter Account Number: ");
    scanf("%d", &customer.accNo);

    printf("Enter Name: ");
    scanf("%s", customer.name);

    printf("Enter Initial Deposit: ");
    scanf("%f", &customer.balance);

    printf("\nAccount Created Successfully!\n");
}

void deposit() {
    float amount;
    printf("\nEnter Amount to Deposit: ");
    scanf("%f", &amount);

    customer.balance += amount;
    printf("Amount Deposited Successfully!\n");
}

void withdraw() {
    float amount;
    printf("\nEnter Amount to Withdraw: ");
    scanf("%f", &amount);

    if (amount > customer.balance) {
        printf("Insufficient Balance!\n");
    } else {
        customer.balance -= amount;
        printf("Amount Withdrawn Successfully!\n");
    }
}

void display() {
    printf("\n--- Account Details ---\n");
    printf("Account Number: %d\n", customer.accNo);
    printf("Name: %s\n", customer.name);
    printf("Balance: %.2f\n", customer.balance);
}

int main() {
    int choice;

    while (1) {
        printf("\n===== Bank Management System =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Display Account\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid Choice! Try Again.\n");
        }
    }

    return 0;
}
