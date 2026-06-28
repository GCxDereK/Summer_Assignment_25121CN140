#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact c[5];
    int i;

    printf("Enter details of 5 contacts:\n");

    for(i = 0; i < 5; i++) {
        printf("\nContact %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", c[i].name);

        printf("Enter Phone Number: ");
        scanf("%s", c[i].phone);
    }

    printf("\nContact List:\n");

    for(i = 0; i < 5; i++) {
        printf("\nName: %s\n", c[i].name);
        printf("Phone Number: %s\n", c[i].phone);
    }

    return 0;
}