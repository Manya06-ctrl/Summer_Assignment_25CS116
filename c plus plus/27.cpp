//check wheather a number is three digit
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter ur number:";
    cin>>n;
    if(n>99 &&n<=999){
        cout<<"three digit number";
    }
    else{
        cout<<"not three digit";
    }
    return 0;
}