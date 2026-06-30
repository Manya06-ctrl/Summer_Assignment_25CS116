//print the sum of series 1-2+3-4+5....
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the term:";
    cin>>n;
    for(int i=1;i<=n;i++){
        //sum=sum+i; we wnt a pattern we dont want a simple sum of term prog.
        if(i%2!=0){
            sum=sum+i;
        }
        else{
            sum=sum-i;
        }

    }
    cout<<"sum of pattern are:"<<sum;
    return 0;
}