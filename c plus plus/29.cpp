//check whether number is multiple of both 3 and 7
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number:";
    cin>>num;
    if(num%3==0 && num%7==0){
        cout<< "multiple of both 3 and 7";
    }
    else if(num%3==0){
        cout<<"multiple of 3 only";
    }
    else if(num%7==0){
        cout<<"multiple of 7 only";
    }
    else{
        cout<<"not multiple os either 3 and7";
    }
    
    return 0;
}

