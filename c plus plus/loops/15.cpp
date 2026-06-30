//display the ap 100,97,94 ... upto all postive terms
#include<iostream>
using namespace std;
int main(){
    int a,d,n;
    cout<<"enter your first term of ap:";
    cin>>a;
    cout<<"enter diff btw 2 ap:";
    cin>>d;
    
    for(int i=a;a>=0;i++){
        cout<<a<<" ";
        
        a=a+d;
    
    
}
    return 0;
}
