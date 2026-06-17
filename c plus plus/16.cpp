//lagrest among three number
#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"enter num1,num2,num3:";
    
    cin>>num1;
    cin>>num2;
    cin>>num3;
    if(num1>num2 && num1>num3){
        cout<<"num1 is greater";
    }
    else if(num2>num1 && num2>num3){
        cout<<"num2 is greater";
    }
    
    
    else{
        cout<<"num3 is greater";
    }
    return 0;
}