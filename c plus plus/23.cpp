// three sides form valid triangle
#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cout<<"enter side1,side2,side3:";
    cin>>s1>>s2>>s3;
    if(s1+s2>s3 && s2+s3>s1 && s1+s3>s2){// we can use logical and opt here because sare condition true hone chaiye 
        cout<<"valid triangle";// 3 4 5 3+4>5,3+5>4,5+4>3
    }
    
    
    else{
        cout<<"not valid";
    }
    return 0;
}