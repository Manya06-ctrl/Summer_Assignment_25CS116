//sum of digits
#include <iostream>
using namespace std;
int main(){
    int n,sum=0,rem;
    cout<<"enter number";
    cin>>n;
    while(n!=0){
        //we use while loop when we know v limited things
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    cout<<sum;
    return 0;

}