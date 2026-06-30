// find max frequency element jis element ki repetation jada ho
#include <stdio.h>

int main()
{
    int arr[5], i, j, count;

    for (i = 0; i < 5; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int maxfreq = 0;
    int element;

    for (i = 0; i < 5; i++)
    {
        count = 0;

        for (j = 0; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count > maxfreq)
        {
            maxfreq = count;
            element = arr[i];
        }
    }

    printf("Maximum frequency element is: %d\n", element);
    printf("Frequency is: %d", maxfreq);

    return 0;
}
