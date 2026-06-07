// print lcm of two number
#include <stdio.h>
int main()
{
    int a, b,lcm, max;
    printf("enter two numbers a,b");
    scanf("%d %d",&a,&b);
    max = (a > b) ? a : b;

    for (lcm = max;; lcm++)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            break;
        }
    }
    printf("lcm is =%d", lcm);
    return 0;
}
