// palindrome using string
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len = 0, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // find length (ignore newline)
    while (str[len] != '\0')
    {
        if (str[len] == '\n')
            break;
        len++;
    }

    // check palindrome
    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("String is Palindrome\n");
    else
        printf("String is Not Palindrome\n");

    return 0;
}
