//print table using while loop
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the num:";
    cin>>num;
    int i=1;//intialization
    while(i<=10){//condition
        num*i;
        cout<<num*i<<endl;
        i++;//updation
    }
    
        return 0;
}