#include <stdio.h>

int main() {
    int arr[10];
    int i, num, found = 0;

    printf("Enter 10 elements:\n");

    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &num);

    for(i = 0; i < 10; i++) {
        if(arr[i] == num) {
            found = 1;
            printf("position %d", i + 1);
            break;
        }
    }

    if(found == 0) {
        printf("not found");
    }

    return 0;
}