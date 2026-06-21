//product of first natural number
#include<iostream>
using namespace std;
int main(){
    int pro=1,N;
    cout<<"enter number=";
    cin>>N;
    for(int i=1;i<=N;i++){
        pro=pro*i;
    }
    cout<<pro;
}