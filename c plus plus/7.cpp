// header files
// 1.system header file,2.user defined header files
// system header files: comes with the compiler
// #include <iostream>
// user defined header files: it is written by the programmer
// #include <this.h>// this will produce error if this.h is not present in current
// directory
// operators in c++
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    
    cout << "operators in c++:" << endl;
    cout << "following are the operators in c++:";
    // arithematic operators
    cout << "\n the value of a ";
    cin>>a;

    cout<<"value of b";
    cin>>b;
    
    cout << "\n the value of a + b:" << a + b;
    
    
    cout << "\nthe value of a%b:" << a % b;
    cout << "\nthe value of a*b:" << a *b;
    cout << "\nthe value of a/b:" << a /b;
    cout << "\n the value of a++:" << a++;
    cout << "\n the value of a--:" << a--;
    cout<<"\nthe value of ++a+b"<<++a+b;
    cout<<"\nthe value of a+++b"<<a+++b;//value of a is already updated

    
    
    cout << "\nthe value of a++:" << a++;
    cout << "\nthe value of a--:" << a--;
    a*=b;//
    cout<<"\nthe value of a*=b"<<a;//a=a*b
    //a+=b
    //a-=b
    //a/=b
    //assignment opt
    
    
    return 0;
}
