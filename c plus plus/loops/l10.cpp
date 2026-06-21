// cal factorial of num
#include<iostream>
using namespace std;
int main(){
    int fact=1,N;//fact aur product of digits ka same meaning hai
    cout<<"enter number=";
    cin>>N;
    for(int i=1;i<=N;i++){
        fact=fact*i;
    }
    cout<<fact;
}