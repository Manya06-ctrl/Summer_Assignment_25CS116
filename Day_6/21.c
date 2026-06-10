// convert decimal to binary
#include <stdio.h>
int main()

{
    int decimal, binary = 0, place = 1, remainder;
    printf("enter a decimal number :");
    scanf("%d", &decimal);
    while (decimal > 0)
    {
        remainder = decimal % 2;
        binary = binary + (remainder * place);
        place = place * 10;
        decimal = decimal / 2;
    }
    printf("binary number=%d", binary);
    return 0;
}
