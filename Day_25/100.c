// wap to sort words by length
#include <stdio.h>
#include <string.h>

int main()
{
    char words[100][50], temp[50];
    int n, i, j;

    printf("Enter number of words: ");
    scanf("%d", &n);
    getchar(); // clear newline

    printf("Enter words:\n");
    for (i = 0; i < n; i++)
    {
        fgets(words[i], sizeof(words[i]), stdin);
        words[i][strcspn(words[i], "\n")] = '\0'; // remove newline
    }

    // sort by length
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strlen(words[i]) > strlen(words[j]))
            {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("Words sorted by length:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", words[i]);
    }

    return 0;
}