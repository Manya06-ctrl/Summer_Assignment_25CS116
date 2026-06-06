#include <stdio.h> //palindrome
int main()
{
    int n, re = 0;
    printf("enter a number:");
    scanf("%d", &n);
        int x = n;
    while (n != 0)
    {
        int ld;
        ld = n % 10;
        re = (10 * re) + ld;
        n = n / 10;
    }
    if (x == re)
    {
        printf("palindrome number");
    }
    else
    {
        printf("not palindrome number");
    }
    return 0;
}
