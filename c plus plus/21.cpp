// check wheater triangle is eq,isoceles,scalar
#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cout<<"enter side1,side2,side3:";
    cin>>s1;
    cin>>s2;
    cin>>s3;
    if(s1==s2 && s2==s3 && s3==s1){
        cout<<"equilateral ";
    }
    else if(s1== s2 || s2==s3 || s3==s1){
    cout<<"isoceles";
    }
    
    else if(s1!=s2 && s2!=s3){
        cout<<"scalar";
    }
    return 0;
}