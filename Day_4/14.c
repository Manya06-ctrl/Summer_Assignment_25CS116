// nth term of fibonacci series

#include <stdio.h>

int main() {
    int n;
    int a = 0, b = 1, c;

    printf("Enter the term number: ");
    scanf("%d", &n);

    if (n == 1)
        printf("Fibonacci term = %d", a);
    else if (n == 2)
        printf("Fibonacci term = %d", b);//else if ki condition laga di mtlb agr first if nhi chla toh else if jaruri nhi hai chle iske bdd ek aur else ka condition ayegaa
    else {
        for (int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("Fibonacci term = %d", b);
    }

    return 0;
}
