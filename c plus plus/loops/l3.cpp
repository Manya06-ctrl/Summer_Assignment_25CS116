// print even number in 1 to 100
#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 1; i <= 100; i++)//without if condition krenge toh yaha error ayege becz vo sb cases mai i print krega.
    {

       if( i % 2 == 0){
        cout<< i<<endl;
    } 
    }
    return 0;
}