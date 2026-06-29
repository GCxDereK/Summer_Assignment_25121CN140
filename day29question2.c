#include <stdio.h>

int main() {
    int n, i;
    int choice;
    int sum = 0, largest, smallest;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    while(1) {
        printf("\nMenu\n");
        printf("1. Display Array\n");
        printf("2. Sum of Elements\n");
        printf("3. Largest Element\n");
        printf("4. Smallest Element\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Array Elements: ");
            for(i = 0; i < n; i++) {
                printf("%d ", a[i]);
            }
            printf("\n");
        }
        else if(choice == 2) {
            sum = 0;
            for(i = 0; i < n; i++) {
                sum = sum + a[i];
            }
            printf("Sum = %d\n", sum);
        }
        else if(choice == 3) {
            largest = a[0];
            for(i = 1; i < n; i++) {
                if(a[i] > largest) {
                    largest = a[i];
                }
            }
            printf("Largest Element = %d\n", largest);
        }
        else if(choice == 4) {
            smallest = a[0];
            for(i = 1; i < n; i++) {
                if(a[i] < smallest) {
                    smallest = a[i];
                }
            }
            printf("Smallest Element = %d\n", smallest);
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