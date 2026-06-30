//reverse of a digit
#include<iostream>
using namespace std;
int main(){
    int num,rev=0,ld;
    cout<<"enter the num:";
    cin>>num;
    while(num!=0){

        ld=num%10;
        rev=rev*10+ld;
        num=num/10;

    }
    cout<<"rev number:"<<rev;
}