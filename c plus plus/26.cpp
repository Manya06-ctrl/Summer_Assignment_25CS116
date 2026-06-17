//cal income tax based on slabs
#include<iostream>
using namespace std;
int main (){
    int salary;
    int tax;
    cout<<"enter your salary per month:";
    cin>>salary;
    if(salary<=100000){
        cout<<"youre free from income tax ";
    }
    else if(salary>100000){
        tax==0.05*salary;
        
        cout<<tax;
        cout<<"\n5% kha jayege gov ";


    }
    else if(salary>=500000){
        tax==0.20*salary;
        cout<<tax;
        cout<<"20% kha jayege gov";
    }
    else if(salary>=10000000){
        tax==0.30*salary;
        cout<<tax;
        cout<<"30% kha jayege gov";

    }
    return 0;
}