//print of even number
#include <iostream>
using namespace std;
int main()
{
    int num[100], n, count = 0,i;
    cout << "enter elements from 1 to 100:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    cout<<"even numbers:";
    for ( i = 0; i < n; i++)
    {
        
        if (num[i] % 2 == 0)
        {
            
                                   count++;
                                   cout<<num[i]<<" ";
                                   
        }
        
    }
    
    
    return 0;
}