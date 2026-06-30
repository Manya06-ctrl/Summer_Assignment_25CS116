//maximum element
#include<iostream>
using namespace std;
int main(){
    int num[100],n;
    cout<<"enter elements from 1 to 100:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num[i];
    
    }
    for(int i=0;i<n;i++){
    if(num[0]<num[i]){
        
        num[0]=num[i];
    }

    
    cout<<num[i]<<" ";
}
    return 0;

}