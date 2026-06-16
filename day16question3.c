#include <stdio.h>

int main() {
    int arr[10];
    int i, j, sum;
    int found = 0;

    printf("Enter 10 elements:\n");

    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the required sum: ");
    scanf("%d", &sum);

    for(i = 0; i < 10; i++) {
        for(j = i + 1; j < 10; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("Pair found: %d and %d\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if(found == 0) {
        printf("No pair found");
    }

    return 0;
}