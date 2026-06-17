// largest among four numbers using nested if else
#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3,num4;
    cout<<"enter num1,num2,num3,num4:";
    cin>>num1>>num2>>num3>>num4;
    if(num1>num2 && num1>num3 && num1>>num4){
        cout<<"num1 is greatest";
    }
    
    
    else if(num2>num1 && num2>num3 && num2>num4){
        cout<<"num2 is greatest";
    }
    else if(num3>num1 && num3>num2 && num3> num4){
        cout<<"num3 is greatest";

    }
    else if (num4>num1 && num4>num2 && num4> num3){
        cout<<"num4 is greatest";
    }
    return 0;
}