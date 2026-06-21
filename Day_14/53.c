//linear search
#include <stdio.h>

int main()
{
    int a[100], n, i, x, flag = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            flag = 1;
            printf("Element found at position %d", i + 1);
            break;
        }
    }

    if(flag == 0)
    {
        printf("Element not found");
    }

    return 0;
}