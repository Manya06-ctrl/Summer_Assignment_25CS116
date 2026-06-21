/* parking fee calculator 
timings ke accordinly we decide fees 
likee according to the min we set prices 
for ex 1min=0.5 rs*/
#include<iostream>
using namespace std;
int main (){
    int time,bill,timea;
    float fee=0.5;

    cout<<"ur parking timings are following:";
    cout<<"\n20min\n30min\n60min\n120min\n180min\nalmost full day (1440min)";
    cout<<"\nenter ur time according to the mentioning times"<<"\n  or if u wnt t enter diff timings u can :";
    cin>>time;
    bill=fee*time;
    cout<<"\nyour total bill is:"<<bill;

    
    
    
    cout<<"\nper min fee is rs."<<fee;
    bill=fee*timea;
    
    
    return 0;
    
}
