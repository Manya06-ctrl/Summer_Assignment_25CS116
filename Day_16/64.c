// program to remove duplicate from array
#include <stdio.h>

int main()
{
    int arr[5], i, j, k, n = 5;

    // Input array elements
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Remove duplicate elements
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            // If duplicate is found
            if (arr[i] == arr[j])
            {
                // Shift elements to the left
                for (k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                n--; // Reduce array size
                j--; // Check the new element at index j
            }
        }
    }

    // Print array after removing duplicates
    printf("Array after removing duplicates:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
