//  palindrome number//121 13231 14541
#include<iostream>
using namespace std;
int main(){
    int num,rev=0,ld,original;
    cout<<"enter the num:";
    cin>>num;
    original=num;
    while(num!=0){

        ld=num%10;
        rev=rev*10+ld;
        num=num/10;

    }
    if(original==rev)//here we cant use num because num =num/10 update hori hai;
    cout<<"palindrome number";
    else{
        cout<<"not palindrome";
    }
}