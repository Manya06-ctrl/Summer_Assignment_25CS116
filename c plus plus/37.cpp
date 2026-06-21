//online shopping discount system
#include<iostream>
using namespace std;
int main (){
    int bill,total,dresses,tee,bottoms,gst=55;
    float discount_per,final_bill,discount;
    
    
    cout<<"enter ur dresses amount:";
    cin>>dresses;
    cout<<"\nenter ur tee and top amount:";
    cin>>tee;
    
    cout<<"\nenter ur bottom amount:";
    cin>>bottoms;
    bill=dresses+tee+bottoms+gst;
    cout<<"\ngst=55"<<"\ngst is also included in your total bill";
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