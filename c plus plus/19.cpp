// div by both 5 and 11
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter num:";
    cin>>num;
    if(num%5==0  && num%11==0){
        cout<<"div by both 5 and 11";
    }
    
    
    else{
        cout<<"cant div by 5 and 11";
    }
    return 0;
}