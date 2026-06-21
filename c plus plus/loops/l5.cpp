//print table
#include<iostream>
using namespace std;
int main(){
    int num,table;
    cout<<"enter number for ur table:";
    cin>>num;
    for(int i=1;i<=10;i++){
        table=num*i;
        cout<<table<<endl;
    }

}