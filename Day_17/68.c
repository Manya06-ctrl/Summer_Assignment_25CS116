#include <stdio.h>

int main()
{
    int arr1[5], arr2[5];
    int i, j;

    // Input first array
    printf("Enter first array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Input second array
    printf("Enter second array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr2[i]);
    }

    printf("Common elements are:\n");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (arr1[i] == arr2[j])
            {
                printf("%d ", arr1[i]);
                break; // stops duplicate match for arr2
            }
        }
    }

    return 0;
}