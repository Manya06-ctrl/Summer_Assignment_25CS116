// writw function too find factorial
#include <stdio.h>

int factorial(int n) {
    long long int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %lld = %lld\n", num, factorial(num));

    return 0;
}