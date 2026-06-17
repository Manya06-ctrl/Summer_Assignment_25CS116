//second largest among three number
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a,b,c:";
    cin>>a>>b>>c;
    if( a<b && b<c && a<c){
        cout<<"second largest number is b";
    }
    
    else if(b<a && a<c && b<c ){
        cout<<"second largest is a";
    }
    else if(a<c && c<b && a<b ){
        cout<<"second largest is a";
    }
    return 0;
}