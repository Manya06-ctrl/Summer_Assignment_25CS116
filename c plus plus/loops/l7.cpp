//sum of even numbervup to N
#include<iostream>
using namespace std;
int main(){
    int sum=0,N;
    cout<<"enter ur NUMBER N:";
    cin>>N;
    for (int i=1;i<=N;i++){
        if(i%2==0){
            
            sum=sum+i;
        }
        
    }
    cout<<sum;
    
    return 0;
}