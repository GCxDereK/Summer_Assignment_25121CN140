#include <stdio.h>

int main() {
    int arr[10];
    int i, num;
    int count = 0;

    printf("Enter 10 elements:\n");

    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find frequency: ");
    scanf("%d", &num);

    for(i = 0; i < 10; i++) {
        if(arr[i] == num) {
            count++;
        }
    }

    printf("Frequency of %d is %d", num, count);

    return 0;
}