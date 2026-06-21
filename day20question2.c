#include <stdio.h>

int main() {
    int n;
    int i, j;
    int flag = 1;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter elements of the matrix:\n");

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1) {
        printf("Matrix is symmetric");
    } else {
        printf("Matrix is not symmetric");
    }

    return 0;
}