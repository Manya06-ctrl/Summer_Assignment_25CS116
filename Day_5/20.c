//find largest prime factor of a number 
//prime number  is a number tht is only divisible by 1 and by own
#include<stdio.h>
int main()
{
    int n,p,i;
    printf("enter a number=");
    scanf("%d",&n);
    
        for (i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            p = i;
            n = n / i;
        }
    }

    printf("Largest prime factor = %d", p);

    return 0;
}

    

