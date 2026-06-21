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

    printf("Column-wise sums:\n");

    for(j = 0; j < n; j++) {
        sum = 0;

        for(i = 0; i < m; i++) {
            sum = sum + a[i][j];
        }

        printf("Sum of column %d = %d\n", j + 1, sum);
    }

    return 0;
}