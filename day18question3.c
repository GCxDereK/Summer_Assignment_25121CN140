#include <stdio.h>

int main() {
    int arr[10];
    int i, num;
    int low = 0, high = 9, mid;
    int found = 0;

    printf("Enter 10 sorted elements:\n");

    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &num);

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == num) {
            printf("Element found at position %d", mid + 1);
            found = 1;
            break;
        }
        else if(arr[mid] < num) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(found == 0) {
        printf("Element not found");
    }

    return 0;
}