//sum of array
#include<iostream>
using namespace std;
int main(){
    int num[7]={1,2,3,4,5,6,7},sum=0;
    for(int i=0;i<7;i++){
        cout<<num[i]<<" ";
        sum=sum+num[i];
        

    }
    cout<<"\nsum of array is:"<<sum;
}