#include <stdio.h>
int main (){
    int n,r,arm=0;
    printf("enter a number:");
    scanf("%d",&n);
    while(n>0){

        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;

    }
    printf("armstrong number=%d",arm);
    return 0;
}