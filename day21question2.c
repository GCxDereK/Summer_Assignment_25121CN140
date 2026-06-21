#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j;
    char temp;

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[i] != '\0') {
        i++;
    }

    for(j = 0; j < i / 2; j++) {
        temp = str[j];
        str[j] = str[i - 1 - j];
        str[i - 1 - j] = temp;
    }

    printf("Reversed string = %s", str);

    return 0;
}