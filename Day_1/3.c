#include <stdio.h>
int main()
{
    int n,i, p=1;
    printf("enter a number:");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        p = p * i;

     } printf("factorial of %d=%d", n, p);
    
    return 0;
}