//sum of element of array
#include<iostream>
using namespace std;
int main(){
    int num[100],n,sum=0;
    cout<<"enter elements from 1 to 100:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num[i];
    
    }
    for(int i=0;i<n;i++){

    
    cout<<num[i]<<" ";
    sum=sum+num[i];
}
cout<<"sum is:"<<sum<<endl;

    return 0;

}