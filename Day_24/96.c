// program to remove duplicate character
#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], result[200];
    int i, j, k = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // remove newline if present
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++)
    {
        int flag = 0;

        // check if character already exists in result
        for (j = 0; j < k; j++)
        {
            if (str[i] == result[j])
            {
                flag = 1;
                break;
            }
        }

        // if not duplicate, add to result
        if (flag == 0)
        {
            result[k] = str[i];
            k++;
        }
    }

    result[k] = '\0';

    printf("String after removing duplicates: %s\n", result);

    return 0;
}