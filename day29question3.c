#include <stdio.h>

int main() {
    char str[100];
    int choice;
    int i, length = 0;
    char temp;

    printf("Enter a string: ");
    scanf("%s", str);

    while(1) {
        printf("\nMenu\n");
        printf("1. Display String\n");
        printf("2. Find Length\n");
        printf("3. Reverse String\n");
        printf("4. Convert to Uppercase\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("String = %s\n", str);
        }
        else if(choice == 2) {
            length = 0;
            while(str[length] != '\0') {
                length++;
            }
            printf("Length = %d\n", length);
        }
        else if(choice == 3) {
            length = 0;
            while(str[length] != '\0') {
                length++;
            }

            for(i = 0; i < length / 2; i++) {
                temp = str[i];
                str[i] = str[length - 1 - i];
                str[length - 1 - i] = temp;
            }

            printf("Reversed String = %s\n", str);
        }
        else if(choice == 4) {
            for(i = 0; str[i] != '\0'; i++) {
                if(str[i] >= 'a' && str[i] <= 'z') {
                    str[i] = str[i] - 32;
                }
            }

            printf("Uppercase String = %s\n", str);
        }
        else if(choice == 5) {
            printf("Thank You!");
            break;
        }
        else {
            printf("Invalid Choice\n");
        }
    }

    return 0;
}