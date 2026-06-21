// addmission eligiblity
#include <iostream>
using namespace std;
int main()
{
    float m1,m2,m3,m4,m5,m6,obtained,total,per,pcm,pcm_t,pcm_p;//int rhkne se %0 ayege bar bar because0.smthg bnega toh it will show per as 0
    
    cout<<"enter your phy marks:";
    cin>>m1;
    cout<<"enter your chem marks:";
    cin>>m2;
    cout<<"enter your maths marks:";
    cin>>m3;
    cout<<"enter your hindi marks:";
    cin>>m4;
    cout<<"enter your eng marks:";
    cin>>m5;
    cout<<"enter your IT marks:";
    cin>>m6;
    obtained=m1+m2+m3+m4+m5+m6;
    cout<<"\nthe obtained marks is:";
    cout<<obtained;
    total=600;
    per=(obtained/total)*100;
    cout<<"\npercentage is:";
    cout<<per;
    pcm=m1+m2+m3;
    cout<<"\nmarks total in pcm:";
    cout<<pcm;
    pcm_t=300;
    pcm_p=(pcm/pcm_t)*100;
    cout<<"\npcm percentage is:";
    cout<<pcm_p;
    if(per>=70 && pcm_p>=60){
        cout<<"\nstudent is eligible for addmission";
    }
    else{
        cout<<"\nnot eligible for addmission";
    }
    return 0;
}







    