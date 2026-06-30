//display an AP here we make a code to genrealise the AP
#include<iostream>
using namespace std;
int main(){
    int a,d,n;
    cout<<"enter your first term of ap:";
    cin>>a;
    cout<<"enter diff btw 2 ap:";
    cin>>d;
    cout<<"enter number of terms in ap:";
    cin>>n;
    for(int i=a;i<=a+(n-1)*d;i=i+d){
    cout<<i<<" ";
    }
    return 0;
}
