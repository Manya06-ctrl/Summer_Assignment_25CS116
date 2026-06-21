//sum of first N natural number
#include<iostream>
using namespace std;
int main(){
    int N,sum=0;
    cout<<"enter number:";
    cin>>N;
    for (int i=1;i<=N;i++){
        
        sum=sum+i;
        
    }
    cout<<sum;//ye value loop ke bhr print hogi becz sare value sum mai store hogi thn last execute hogi
    return 0;
}