#include <stdio.h>

int main() {
    int m, n;
    int i, j, sum;

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

    printf("Row-wise sums:\n");

    for(i = 0; i < m; i++) {
        sum = 0;

        for(j = 0; j < n; j++) {
            sum = sum + a[i][j];
        }

        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}