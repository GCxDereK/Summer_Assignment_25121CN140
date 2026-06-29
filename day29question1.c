#include <stdio.h>

int main() {
    int choice;
    float a, b, result;

    while(1) {
        printf("\nMenu-Driven Calculator\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 5) {
            printf("Thank You!");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%f%f", &a, &b);

        if(choice == 1) {
            result = a + b;
            printf("Result = %.2f\n", result);
        }
        else if(choice == 2) {
            result = a - b;
            printf("Result = %.2f\n", result);
        }
        else if(choice == 3) {
            result = a * b;
            printf("Result = %.2f\n", result);
        }
        else if(choice == 4) {
            if(b != 0) {
                result = a / b;
                printf("Result = %.2f\n", result);
            }
            else {
                printf("Division by zero is not possible.\n");
            }
        }
        else {
            printf("Invalid Choice\n");
        }
    }

    return 0;
}