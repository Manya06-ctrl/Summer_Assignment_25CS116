// write a program to union of array
#include <stdio.h>

int main()
{
    int arr1[5], arr2[5], arr3[10];
    int i, j, k = 0, found;

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

    // Copy all elements of first array into third array
    for (i = 0; i < 5; i++)
    {
        arr3[k] = arr1[i];
        k++;
    }

    // Add only unique elements of second array
    for (i = 0; i < 5; i++)
    {
        found = 0;

        for (j = 0; j < k; j++)
        {
            if (arr2[i] == arr3[j])
            {
                found = 1; // Element already exists
                break;
            }
        }

        // If element is not present, add it
        if (found == 0)
        {
            arr3[k] = arr2[i];
            k++;
        }
    }

    // Print union array
    printf("Union of arrays:\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}