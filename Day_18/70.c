// selection sort
#include <stdio.h>

int main()
{
    int arr[5], i, j, minIndex, temp;

    // Input array elements
    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Selection Sort logic
    for (i = 0; i < 5; i++)
    {
        minIndex = i; // assume current index is minimum

        for (j = i + 1; j < 5; j++)
        {
            // find the smallest element in remaining array
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // swap if smaller element is found
        if (minIndex != i)
        {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    // Print sorted array
    printf("Sorted array is:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}