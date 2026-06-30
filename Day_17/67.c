// wap for intersection of array
#include <stdio.h>

int main()
{
    int arr1[5], arr2[5];
    int i, j;

    // Input first array
    printf("Enter elements of first array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Input second array
    printf("Enter elements of second array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Find common elements
    printf("Intersection of arrays:\n");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            // If elements are same
            if (arr1[i] == arr2[j])
            {
                printf("%d ", arr1[i]);
                break; // can cannot use break statement
            }
        }
    }

    return 0;
}
