//loan eligiblity
#include<iostream>
using namespace std;
int main(){
    int age ,salary,credit_score;
    cout<<"enter age of person:";
    cin>>age;
    cout<<"\nenter salary of person:";
    cin>>salary;
    cout<<"\nenter credit score:";
    cin>>credit_score;
    if(age>=21 && salary>=21000 && credit_score>700){
        cout<<"person is eligible for loan";

    }
    else if(age>=21 || salary>=21000 || credit_score>700){
        cout<<"person is not eligible for loan";

    }
    
        
        return 0;
    }


    

        


