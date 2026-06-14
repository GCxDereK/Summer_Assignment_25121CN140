#include <stdio.h>

int main() {
    int arr[10];
    int i;
    int largest, second;

    printf("Enter 10 elements:\n");

    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    second = arr[0];

    for(i = 1; i < 10; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    printf("Second largest element = %d", second);

    return 0;
}