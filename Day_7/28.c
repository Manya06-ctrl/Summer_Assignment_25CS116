//recursive reverse number
#include <stdio.h>

int r = 0;

int reverse(int n)
{
    if(n == 0)
        return 0;
    else
    {
        r = r * 10 + n % 10;
        reverse(n / 10);
    }
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    reverse(n);

    printf("Reverse number = %d", r);

    return 0;
}
