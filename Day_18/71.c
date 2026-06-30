// binary search
#include <stdio.h>

int main()
{
    int arr[5], i, key;
    int low, high, mid, found = 0;

    // Input sorted array
    printf("Enter 5 sorted elements:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = 4;

    // Binary Search logic
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            found = 1;
            printf("Element found at position %d\n", mid + 1);
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1; // search right side
        }
        else
        {
            high = mid - 1; // search left side
        }
    }

    if (found == 0)
    {
        printf("Element not found\n");
    }

    return 0;
}