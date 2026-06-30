// program to merge two sorted array
#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int n1, n2, i, j, k;

    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);

    printf("Enter elements of first sorted array:\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);

    printf("Enter elements of second sorted array:\n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    // merge both arrays
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }

    // copy remaining elements of a[]
    while (i < n1)
    {
        c[k++] = a[i++];
    }

    // copy remaining elements of b[]
    while (j < n2)
    {
        c[k++] = b[j++];
    }

    printf("Merged sorted array:\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
