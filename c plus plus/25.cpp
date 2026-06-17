// calculate grade on basis of marks
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter the marks:";
    cin>>marks;
    if(marks>=90 || marks>=100){
        cout<<"grade A";

    }
    else if(marks>=80 || marks>=89){
        cout<<"grade B";

    }
    else if(marks>=70 || marks>=79){
        cout<<"grade C";
    }
    else if(marks>=60 ||marks>=69){
        cout<<"grade D";
    }
    else if(marks<60){
        cout<<"doob ke maarjao";
    }
    return 0;

}