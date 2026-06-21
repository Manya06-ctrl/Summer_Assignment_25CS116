//print square pyramid2 (practice prog.)

#include <stdio.h>
int main(){
      int n;
    printf("enter the value f n :");
    scanf("%d",&n);
    if(n<=2){
        printf("pgl hai kya 2 se badi value daal");
    }
    else {
        for(int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                printf("%d",j);
            }
            printf("\n");

        }
    }
    return 0;
}