#include <stdio.h>
int main()
{
    int N, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        sum = sum + i;
    }
    printf("The sum is %d\n", sum);
    return 0;
}