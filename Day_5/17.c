#include <stdio.h>//perfect number ex=6 is a pn bcz 1,2,3 divides 6 ckm nd 1+2+3=6
int main()
{
    int n, sum = 0, i;

    printf("enter the number n:");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
        printf("perfect number");
    else
        printf("not perfect number");
    return 0;
}