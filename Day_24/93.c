// program for check string rotation
#include <stdio.h>
#include <string.h>

int isRotation(char str1[], char str2[])
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2)
        return 0;

    char temp[200];

    // concatenate str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // check if str2 is substring of temp
    if (strstr(temp, str2) != NULL)
        return 1;

    return 0;
}

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // remove newline
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (isRotation(str1, str2))
        printf("Strings are rotations\n");
    else
        printf("Strings are NOT rotations\n");

    return 0;
}
