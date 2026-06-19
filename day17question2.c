#include <stdio.h>

int main() {
    int arr1[5], arr2[5], arr3[10];
    int i, j, k = 0;
    int found;

    printf("Enter 5 elements for first array:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
        arr3[k] = arr1[i];
        k++;
    }

    printf("Enter 5 elements for second array:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr2[i]);
    }

    for(i = 0; i < 5; i++) {
        found = 0;

        for(j = 0; j < k; j++) {
            if(arr2[i] == arr3[j]) {
                found = 1;
                break;
            }
        }

        if(found == 0) {
            arr3[k] = arr2[i];
            k++;
        }
    }

    printf("Union of arrays:\n");

    for(i = 0; i < k; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}