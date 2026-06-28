#include <stdio.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account a;
    int choice;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &a.accNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", a.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &a.balance);

    while(1) {
        printf("\nBank Account System\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Current Balance = %.2f\n", a.balance);
        }
        else if(choice == 2) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);

            a.balance = a.balance + amount;

            printf("Updated Balance = %.2f\n", a.balance);
        }
        else if(choice == 3) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if(amount <= a.balance) {
                a.balance = a.balance - amount;
                printf("Updated Balance = %.2f\n", a.balance);
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