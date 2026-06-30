//print an array so tht user input the value of array
#include<iostream>
using namespace std;
int main(){
    int num[5];
    //this is a empty array i wnt user value print kre iss array ki
    cout<<"enter digits for the array:";
    // we have to use for loop for the printing because continous array hsai
    for(int i=0;i<=5;i++){
    cin>>num[i];
}
    cout<<"digits are:";

    for(int i=0;i<=5;i++){
        //for printing an array
        
        cout<<num[i]<<" ";

    }

    return 0;

}