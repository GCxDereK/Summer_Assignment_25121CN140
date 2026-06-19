#include <stdio.h>

int main() {
    int m, n;
    int i, j;

    printf("Enter number of rows: ");
    scanf("%d", &m);

    printf("Enter number of columns: ");
    scanf("%d", &n);

    int a[m][n];

    printf("Enter elements of the matrix:\n");

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Transpose of the matrix:\n");

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}