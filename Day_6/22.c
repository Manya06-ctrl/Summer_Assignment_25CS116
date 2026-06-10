//binary to decimal

#include <stdio.h>

int main()
{
    int bin, dec = 0, p = 1, d;

    printf("Enter binary number: ");
    scanf("%d", &bin);

    while (bin != 0)
    {
        d = bin % 10;
        dec = dec + d * p;
        p = p * 2;
        bin = bin / 10;
    }

    printf("Decimal = %d", dec);

    return 0;
}