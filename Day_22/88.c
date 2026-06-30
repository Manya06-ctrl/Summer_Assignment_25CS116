// wap to remove spaces from strings
#include <stdio.h>

int main()
{
    char str[200], result[200];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // remove spaces
    while (str[i] != '\0')
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            result[j] = str[i];
            j++;
        }
        i++;
    }

    result[j] = '\0';

    printf("String after removing spaces: %s\n", result);

    return 0;
}
