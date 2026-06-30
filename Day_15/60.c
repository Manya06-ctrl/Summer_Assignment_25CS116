//move zeroes at end
#include <stdio.h>

int main()
{
    int a[100], n, i, j, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    j = 0;

    for(i = 0; i < n; i++)
    {
        if(a[i] != 0)
        {
            a[j] = a[i];
            j++;
        }
    }

    while(j < n)
    {
        a[j] = 0;
        j++;
    }

    printf("Array after moving zeroes to end:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}