#include <stdio.h>

int main() {
    int balance = 10000;
    int choice, amount;

    while(1) {
        printf("\nATM Menu\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Current Balance = %d\n", balance);
        }
        else if(choice == 2) {
            printf("Enter amount to deposit: ");
            scanf("%d", &amount);

            balance = balance + amount;

            printf("Updated Balance = %d\n", balance);
        }
        else if(choice == 3) {
            printf("Enter amount to withdraw: ");
            scanf("%d", &amount);

            if(amount <= balance) {
                balance = balance - amount;
                printf("Updated Balance = %d\n", balance);
            }
            else {
                printf("Insufficient Balance\n");
            }
        }
        else if(choice == 4) {
            printf("Thank You!");
            break;
        }
        else {
            printf("Invalid Choice\n");
        }
    }

    return 0;
}