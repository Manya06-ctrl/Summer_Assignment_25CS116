#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate length manually
    while (str[i] != '\0')
    {
        // ignore newline if present
        if (str[i] == '\n')
            break;

        length++;
        i++;
    }

    printf("Length of string = %d\n", length);

    return 0;
}