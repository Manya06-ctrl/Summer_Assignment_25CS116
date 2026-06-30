//for gp anth =a*r
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,a,r;
    cout<<"enter n terms:";
    cin>>n;
    
    cout<<"enter the diff:";
    cin>>r;
    cout<<"enter first term:";
    cin>>a;

    //2,4,8,16,32..(only for print this gp)
    
    for(int i=a;i<=n;i=i+r){//only execute tht i n times chelga and everytime new a ki value mai a * ho jayega!
        a=a* pow( r,n-1);
        cout<<a<<" ";  

    } 
    
    
    return 0;
}