#include <stdio.h>

int main() {
    int arr[10];
    int i, j;
    int count, maxCount = 0;
    int maxElement;

    printf("Enter 10 elements:\n");

    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 10; i++) {
        count = 0;

        for(j = 0; j < 10; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    printf("Element with maximum frequency = %d\n", maxElement);
    printf("Frequency = %d\n", maxCount);

    return 0;
}