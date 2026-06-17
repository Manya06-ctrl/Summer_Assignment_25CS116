//print table using do while loop
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number";
    cin>>num;
    int i=1;
    do
    {
        num*i;
        cout<<num*i<<endl;
        i++;
    
    }
    while(i<=10);
    return 0;
}