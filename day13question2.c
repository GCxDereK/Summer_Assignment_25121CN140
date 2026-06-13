#include <stdio.h>

int main() {
    int arr[10], i, sum = 0;
    int average;

    printf("Enter 10 elements:");

    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    average = sum / 10;

    printf("Sum = %d", sum);
    printf("/n Average = %d", average);

    return 0;
}