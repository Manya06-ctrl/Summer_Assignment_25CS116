// wap to merge array
#include <stdio.h>

int main()
{
    int arr1[5], arr2[5], arr3[10];
    int i;

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

    // Copy first array into third array
    for (i = 0; i < 5; i++)
    {
        arr3[i] = arr1[i];
    }

    // Copy second array after first array
    for (i = 0; i < 5; i++)
    {
        arr3[i + 5] = arr2[i];
    }

    // Print merged array
    printf("Merged array is:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}