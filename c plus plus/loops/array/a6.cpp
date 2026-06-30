//count even number
#include<iostream>
using namespace std;
int main(){
    int num[4]={1,2,3,5},count=0;
    
    for(int i=0;i<4;i++){
        
        if(num[i]%2==0){
            cout<<"even number";
            count++;
        }
        
    }
    cout<<count;
    return 0;
}
    