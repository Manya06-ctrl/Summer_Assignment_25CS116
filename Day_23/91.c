// program to find anagram strings
// two strings called anagram who have same character
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int freq[256] = {0};
    int i, len1, len2;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // remove newline if present
    len1 = strlen(str1);
    len2 = strlen(str2);

    if (str1[len1 - 1] == '\n')
        str1[len1 - 1] = '\0';
    if (str2[len2 - 1] == '\n')
        str2[len2 - 1] = '\0';

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2)
    {
        printf("Strings are NOT Anagrams\n");
        return 0;
    }

    // count frequency of first string
    for (i = 0; str1[i] != '\0'; i++)
    {
        freq[(unsigned char)str1[i]]++;
    }

    // subtract frequency using second string
    for (i = 0; str2[i] != '\0'; i++)
    {
        freq[(unsigned char)str2[i]]--;
    }

    // check all zero or not
    for (i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            printf("Strings are NOT Anagrams\n");
            return 0;
        }
    }

    printf("Strings are Anagrams\n");

    return 0;
}