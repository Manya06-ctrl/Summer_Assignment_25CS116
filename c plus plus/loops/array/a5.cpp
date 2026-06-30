// average of array
#include<iostream>
using namespace std;
int main(){
    int num[4]={1,2,3,5},sum=0;
    float avg;
    for(int i=0;i<4;i++){
        cout<<num[i]<<" ";
        sum=sum+num[i];
        avg=sum/2;
        
    }
    cout<<"\navg is:"<<avg;
}