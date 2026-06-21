//restaurant discount cal
#include<iostream>
using namespace std;
int main (){
    int bill,total,food,drinks,service_tax=200;
    float discount_per,final_bill,discount;
    
    
    cout<<"enter ur food amount:";
    cin>>food;
    cout<<"\nenter ur drinks amount:";
    cin>>drinks;
    bill=food+drinks+service_tax;
    cout<<"\nservice tax=200"<<"\nservice tax is also included in your total bill";
    cout<<"\n your total bill is:"<<bill;
    if(bill>=2000 && bill<5000){
        discount_per=20;
        discount=(bill*discount_per)/100;
        final_bill=bill-discount;

        cout<<"\nur bill is above 2000 ur discount is of 20%";
        cout<<"\nur bill amount is:"<<bill;
        cout<<"\nur discount % is:"<<discount_per;
        cout<<"\nur final bill is:"<<final_bill;

        
    }
else if(bill>=5000){
    discount_per=40;
        discount=(bill*discount_per)/100;
        final_bill=bill-discount;

        cout<<"\nur bill is above 2000 ur discount is of 50%";
        cout<<"\nur bill amount is:"<<bill;
        cout<<"\nur discount % is:"<<discount_per;
        cout<<"\nur final bill is:"<<final_bill;
}
cout<<"\ni hope u love our services";
return 0;





}