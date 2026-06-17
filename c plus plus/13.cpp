/* if else loop basic question 1-10*/
//check num is +,-,0
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter num:";
    cin>>num;
    if(num>0){
        cout<<"positive number";
    }
    else if(num==0){
        cout<<"zero";
    }
    else{
        cout<<"negative number";
    }
    return 0;
}