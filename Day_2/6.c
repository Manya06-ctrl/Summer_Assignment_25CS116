#include<stdio.h>
int main(){
    int n,re=0;
    printf("enter a number:");
    scanf("%d",&n);
    while(n!=0){
        int ld;
        ld=n%10;
        re=(10*re)+ld;
        n=n/10;
    }
    printf("reverse number is=%d",re);
    return 0;
    }
