#include <stdio.h>

int main() {
    int arr[9];
    int i;
    int sum = 0, total = 0, missing;

    printf("Enter 9 numbers from 1 to 10 with one number missing:\n");

    for(i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    for(i = 1; i <= 10; i++) {
        total = total + i;
    }

    missing = total - sum;

    printf("Missing number is %d", missing);

    return 0;
}