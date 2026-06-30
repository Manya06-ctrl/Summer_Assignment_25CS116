// wap find pair with given sum
#include <stdio.h>

int main()
{
    int arr[5], i, j, sum;

    // Input array elements
    for (i = 0; i < 5; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input the required sum
    printf("Enter the sum: ");
    scanf("%d", &sum);

    // Check every possible pair
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            // If pair sum is equal to given sum
            if (arr[i] + arr[j] == sum)
            {
                printf("Pair found: %d and %d\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}
