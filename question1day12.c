#include <stdio.h>
#include <string.h>

int palindrome(char str[])
{
    int i,l=strlen(str);

    for(i=0;i<l/2;i++){
        if(str[i]!=str[l-i-1])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s",str);

    if(palindrome(str))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}