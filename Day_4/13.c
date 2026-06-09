#include <stdio.h>//fibonacci series

int main()
{
    int n, x = 0, y = 1, z = 0;
    printf("enter a number:");
    scanf("%d", &n);
    while (z <= n)
    {
        printf("\n%d", y);
        x = y;
        y = z;
        z = x + y;
    }
    return 0;
}