//write a program to find a product of digits
#include<stdio.h>
int main (){
    int n,sum=1;
    printf("Enter a number n:");
    scanf("%d",&n);
    while(n!=0){
        int ld=n%10;
        sum*=ld;
        n=n/10;
    }
    printf("sum of the digit is= %d",sum);
    return 0;
}