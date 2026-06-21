#include <stdio.h>

int main() {
    int m, n, p;
    int i, j, k;

    printf("Enter number of rows of first matrix: ");
    scanf("%d", &m);

    printf("Enter number of columns of first matrix: ");
    scanf("%d", &n);

    printf("Enter number of columns of second matrix: ");
    scanf("%d", &p);

    int a[m][n], b[n][p], c[m][p];

    printf("Enter elements of first matrix:\n");

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");

    for(i = 0; i < n; i++) {
        for(j = 0; j < p; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < p; j++) {
            c[i][j] = 0;

            for(k = 0; k < n; k++) {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("Product of matrices:\n");

    for(i = 0; i < m; i++) {
        for(j = 0; j < p; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}