#include <stdio.h>

int main() {
    int balance = 5000,amt; 
    char choice;

    printf("Welcome to the National Bank of Bharat ATM!\n");
    printf("Your starting balance is: ₹%d\n", balance);

    do {
        printf("\nEnter the amount to withdraw: ₹");
        scanf("%d", &amt);

        if (amt <= balance) {
            balance -= amt;
            printf("Transaction successful! Remaining balance: ₹%d\n", balance);
        } else {
            printf("Insufficient balance.\n");
        }

        printf("Do you want to perform another transaction? (y/n): ");
        scanf(" %c", &choice); 

    } while (choice == 'y' || choice == 'Y');

    printf("\nThank you for using the National Bank of Bharat ATM!\n");

    return 0;
}
