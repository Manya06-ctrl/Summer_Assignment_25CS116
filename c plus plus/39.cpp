//movie ticket  booking acc to the age
# include<iostream>
using namespace std;
int main(){
    int t1,age,num,adult,child,t,T,ticket;
    string s1;
    cout<<"pls choose ur movie according to the list given below";
    cout<<"\n1.laila majnu\n2.ok jannu\n3.lost\n4.death\n5.massan";
    cout<<"\nenter number of movie u wnna watch:";
    cin>>num;
    if( num==1){
        cout<<"you wnna watch laila majnu";
        cout<<"\nshow timings are follwing"<<"\n1.[11:00am-2:00pm]\n2.[5:00pm-8:00pm]\n3.[12:00p,-3:00am]";
        cout<<"\npls enter ur movie slot:";
        cin>>t1;
        if(t1==1){
        cout<<"1.[11:00am-2:00pm]";

        }
        else if(t1==2){
        cout<<"1.[5:00am-8:00pm]";

        }
        else if(t1==3){
        cout<<"1.[12:00am-3:00pm]";
            

}


    }
    else if (num==2)
{
    cout<<"you wnna watch ok jannu";
        cout<<"\nshow timings are follwing"<<"\n1.[12:00am-2:00pm]\n2.[4:00pm-6:00pm]\n3.[10:00pm-12:00am]";
        cout<<"\npls enter ur movie slot:";
        cin>>t1;
     if(t1==1){
        cout<<"1.[12:00am-2:00pm]";

        }
        else if(t1==2){
        cout<<"1.[4:00am-6:00pm]";

        }
        else if(t1==3){
        cout<<"1.[10:00pm-12:00am]";
            

}
}
else if(num==3){
    cout<<"you wnna watch lost";
        cout<<"\nshow timings are follwing"<<"\n1.[11:00am-2:00pm]\n2.[5:00pm-8:00pm]\n3.[12:00p,-3:00am]";
        cout<<"\npls enter ur movie slot:";
        cin>>t1;
        if(t1==1){
        cout<<"1.[11:00am-2:00pm]";

        }
        else if(t1==2){
        cout<<"1.[5:00am-8:00pm]";

        }
        else if(t1==3){
        cout<<"1.[12:00am-3:00pm]";
        
            

}
}
else if(num==4){
    cout<<"you wnna watch death";
        cout<<"\nshow timings are follwing"<<"\n1.[2:00pm-5:00pm]\n2.[10:00pm-1:00am]";
        cout<<"\npls enter ur movie slot:";
        cin>>t1;
        if(t1==1){
        cout<<"1.[2:00am-5:00pm]";

        }
        else if(t1==2){
        cout<<"1.[10:00am-1:00pm]";

        }
        
}
else if(num==5){
    cout<<"you wnna watch massan";
        cout<<"\nshow timings are follwing"<<"\n1.[12:00pm-2:00pm]\n2.[4:00pm-7:00am]";
        cout<<"\npls enter ur movie slot:";
        cin>>t1;
        if(t1==1){
        cout<<"1.[12:00am-2:00pm]";

        }
        else if(t1==2){
        cout<<"1.[4:00am-7:00pm]";

        }
    }
        cout<<"\nwe currently provide 3 seatings experience"<<"\npremium\ngold\nsilver";
        cout<<"\nchoose seats according to your comfort:";
        cin>>s1;
        
        
           if(s1=="premium"){
            cout<<"good choice"<<"\ncost of ticket is different for adults and kids";
            cout<<"\nfor kids(<10)=300\nfor adults:599";
            cout<<"\nenter number of children:";
            cin>>child;

            cout<<"\nenter number of adults:";
            cin>>adult;

            t=300*child;
            T=599*adult;
            ticket=t+T;
            cout<<"price of ur total ticket:"<<ticket;
          }
         
             else if(s1=="gold"){
            cout<<"good choice"<<"\ncost of ticket is different for adults and kids";
            cout<<"\nfor kids(<10)=250\nfor adults:499";
            cout<<"\nenter number of children:";
            cin>>child;
            cout<<"\nenter number of adults:";
            cin>>adult;
            t=300*child;
            T=599*adult;
            ticket=t+T;
            cout<<"price of ur total ticket:"<<ticket;

            


        }
        else if(s1=="silver"){
            cout<<"good choice"<<"\ncost of ticket is different for adults and kids";
            cout<<"\nfor kids(<10)=150\nfor adults:299";
            cout<<"\nenter number of children:";
            cin>>child;
            cout<<"\nenter number of adults:";
            cin>>adult;
            t=300*child;
            T=599*adult;
            ticket=t+T;
            cout<<"price of ur total ticket:"<<ticket;
        }
    

        
        






    return 0;
}