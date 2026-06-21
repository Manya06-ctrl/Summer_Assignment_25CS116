//second largest element
#include <stdio.h>

int main()
{
    int a[100], n, i;
    int first, second;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    first = second = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > first)
        {
            second = first;
            first = a[i];
        }
        else if(a[i] > second && a[i] != first)
        {
            second = a[i];
        }
    }

    printf("Second largest element = %d", second);

    return 0;
}