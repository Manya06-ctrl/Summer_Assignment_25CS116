//scholarship eligiblity
#include<iostream>
using namespace std;
int main(){
    int marks ,attendance,income;
    cout<<"enter marks % of student:";
    cin>>marks;
    cout<<"\nenter attendance of student in %:";
    cin>>attendance;
    cout<<"\nenter the yearly income of family:";
    cin>>income;
    if(marks>=80 && attendance>=75 && income>=800000){


        cout<<"student is eligible for scholarship";
    }
    else if(marks<80 || attendance<75 || income>800000){
        cout<<"\nnot eligible for scholarship";
    }
        return 0;
    }

