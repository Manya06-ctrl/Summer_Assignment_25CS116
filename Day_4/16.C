#include <stdio.h>
int main()
{
    int n, r, arm = 0, c;
    printf("enter a number:");
    scanf("%d", &n);
    while (n > 0)
    {

        r = n % 10;
        arm = (r * r * r) + arm;
        n = n / 10;
    }
    if (c == arm)
        printf("%d is an Armstrong number.", arm);
    else
        printf("%d not Armstrong", arm );
    return 0;
}
    