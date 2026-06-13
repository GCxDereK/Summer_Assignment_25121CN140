#include <stdio.h>

int main() {
    int arr[10], i, l, s;

    printf("Enter 10 elements:");

    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    l = s = arr[0];

    for(i = 1; i < 10; i++) {
        if(arr[i] > l)
            l = arr[i];

        if(arr[i] < s)
            s = arr[i];
    }

    printf("Largest element = %d\n", l);
    printf("Smallest element = %d\n", s);

    return 0;
}