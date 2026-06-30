//sum and reverse of a digit
#include<iostream>
using namespace std;
int main(){
    int n,rev=0,sum=0,ld;
    cout<<"enter the number:";
    cin>>n;
    while(n!=0){
        ld=n%10;
        sum=sum+ld;
        rev=rev*10+ld;
        n=n/10;
    }
    cout<<"the sum of given digits:"<<sum;
    cout<<"\nthe rev of digits are"<<rev;

    return 0;

}