#include <stdio.h>

int main() {
    int m, n;
    int i, j;
    int sum = 0;

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

    if(m != n) {
        printf("Diagonal sum is possible only for a square matrix.");
        return 0;
    }

    for(i = 0; i < m; i++) {
        sum = sum + a[i][i];
    }

    printf("Sum of principal diagonal = %d", sum);

    return 0;
}