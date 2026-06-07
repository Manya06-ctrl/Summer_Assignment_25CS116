#include <stdio.h>
int main () {
     int n, i, count;
    printf("Enter a number n:");
    scanf("%d", &n);
    for (i = 1; i<= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
        if (count == 2)
        {
            printf("number is prime");
        }
        else
        {
            printf("not prime");
        }
    
    return 0;
}
