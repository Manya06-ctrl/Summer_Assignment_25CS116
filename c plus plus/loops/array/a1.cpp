/* print an array
syantx to print an array data type variable [] size of array then we have to store values in array 
basically we genrally give size of array which store in index*/
#include<iostream>
using namespace std;
int main(){
    int num[7]={1,2,3,4,5};
    for(int i=0;i<7;i++)// so basically its a one D array and array are in continous manner so have to use for loop soo tht we can print array in continus manner
    cout<<num[i]<<" ";
}