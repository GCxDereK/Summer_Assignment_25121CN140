#include <stdio.h>

int armstrong(int n)
{
    int temp=n,sum=0,rem;

    while(temp>0)
    {
        rem=temp%10;
        sum=sum+(rem*rem*rem);
        temp=temp/10;
    }

    if(sum==n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(armstrong(n))
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}