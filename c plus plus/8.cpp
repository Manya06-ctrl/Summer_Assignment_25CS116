 #include <iostream>//relational opt
using namespace std;
int main(){
    int a=6,b=3;
    bool result;
    result=(a==b);
    cout<<"the value of (a==b):"<<result <<endl;
    result=(a!=b);
    cout<<"the value of (a!=b):"<<result;
    //logical opt
    cout<<&a;//address of a
    

    return 0;
    


}