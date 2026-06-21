// function for palindrome
#include <stdio.h>

int palindrome(char str[])
{
    int i = 0, l = 0;

    while (str[l] != '\0')
    {
        l++;
    }

    l--;

    while (i < l)
    {
        if (str[i] != str[l])
        {
            return 0;
        }
        i++;
        l--;
    }

    return 1;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (palindrome(str))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}