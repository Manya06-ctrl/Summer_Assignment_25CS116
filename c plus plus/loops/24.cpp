//pattern printing squarre,rectangle
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the rows:";
    cin>>m;
    cout<<"enter the columns:";
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<"*";
        } 
    cout<<endl;
    }
return 0;   
}