//square pattern(practice prog.)
/*#include <stdio.h>
int main (){

    int n;
    printf(" enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){//outer loop
        for(int j=1;j<=n;j++){//inner loop
            printf("* ");
        }
        printf("\n");
    }
    return 0;
} */
//program to print palindrome pyramid
#include <stdio.h>

int main() {
    int i, j, n = 5;

    for(i = 1; i <= n; i++) {

        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for(j = i; j >= 1; j--) {
            printf("%d", j);
        }

        for(j = 2; j <= i; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}