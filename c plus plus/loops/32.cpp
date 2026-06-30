/* A A
   B B B
   C C C C
   D D D D D*/
   #include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<(char)(i+64)<<" ";

        }
        cout<<endl;
    }
    return 0;
}