//sum of odd digits
#include <iostream>
using namespace std;
int main()
{
    int num[100], n, count = 0,i,sum=0;
    cout << "enter elements from 1 to 100:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    cout<<"odd numbers:";
    for ( i = 0; i < n; i++)
    {
        
        if (num[i] % 2 != 0)
        {
            
                                   count++;
                                   cout<<num[i]<<" ";
                                   sum=sum+num[i];
                                   
        }
        
        
    }
    cout<<"sum of odd digits are:"<<sum;
    
    
    return 0;
}