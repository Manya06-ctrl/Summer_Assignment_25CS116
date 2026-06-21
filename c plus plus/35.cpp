//mobile recharge plan selector
#include <iostream>
using namespace std;
int main()
{
    int budget,data;
    char ch1,ch2;
    ch1='monthly';
    ch2='yearly';
    cout<<"recharge plans are following"<<"\n monthly plans are:\n199\n299\n399\n499\n799"<<"\nyearly plans are:\n1099\n2099\n3099\n4999";
    cout<<"enter your budget to buy your recharge plan:";

    cin>>budget;
    
    cout<<"\namount of data u need on daily basis:";
    cin>>data;
    cout<<"\ntell us u wnt mnthly plan or yearly plan:";
    cin>>ch1;
    cin>>ch2;
     
    switch(budget)//switch mai bss boolean value hi store ho skti
    {
        case 199:
        cout<<"199-2gb dataa"<<"\n unlimited calls and data";
        break;
        case 299:
        cout<<"299-2gb dataa"<<"\n unlimited calls and data" <<"\n hotstar suscription";
         break;
         case 399:
         cout<<"399-2.5gb dataa"<<"\n unlimited calls and data" <<"\n hotstar suscription";
         break;
         case 499:
         cout<<"499-3gb dataa"<<"\n unlimited calls and data" <<"\n hotstar suscription";
         break;
         case 799:
         cout<<"799-5gb dataa"<<"\n unlimited calls and data" <<"\n hotstar and netflix suscription";
         break;
         default:
    
         if(budget>1000 && ch2){
            cout<<"\nyour yearly plans are following:";
         

            else if(budget==1099){
            cout<<"1099-\nyour monthly data will 2gb"<<"\n unlimited calls and sms" ;
            }
            else if( budget==2099){
            cout<<"2099-\n2.5gb dataa"<<"\n unlimited calls and sms" <<"\n hotstar suscription";
            }
            else if(budget==3099){
            
            cout<<"3099-3gb dataa"<<"\n unlimited calls and sms" <<"\n hotstar and netflix suscription";
            }
            else if(budget==4999){
            
            cout<<"4999-5gb dataa"<<"\n unlimited calls and data" <<"\n hotstar and netflix suscription";
         }

        
            
            



         }
    
    return 0; 
}
