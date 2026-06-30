//floyd's triangle
/*1
  2 3
  4 5 6
  7 8 9 10*/
  #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the row number:";
    cin>>n;
    int a=1;//a should be outside from both the loop becz a ki value vo chnge krrha hai loop ke andr a ek baar is intialize hoga
    for (int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a++;
          
        }
        cout<<endl;
    }
    return 0;
}