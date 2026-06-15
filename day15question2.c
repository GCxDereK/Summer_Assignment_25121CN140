#include <stdio.h>

int main() {
    int arr[10];
    int i, temp;

    printf("Enter 10 elements:\n");

    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    temp = arr[0];

    for(i = 0; i < 9; i++) {
        arr[i] = arr[i + 1];
    }

    arr[9] = temp;

    printf("Array after left rotation:\n");

    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}