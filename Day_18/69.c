// bubble sort
#include <stdio.h>

int main()
{
    int arr[5], i, j, temp;

    // Input array elements
    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort logic
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5 - i - 1; j++)
        {
            // If current element is greater than next element, swap them
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
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
