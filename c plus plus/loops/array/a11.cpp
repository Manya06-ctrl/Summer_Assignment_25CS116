// count of even element
#include <iostream>
using namespace std;
int main()
{
    int num[100], n, count = 0;
    cout << "enter elements from 1 to 100:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (num[i] % 2 == 0)
        {
            
                                   count++;
        }
    }
    cout << "even numbers : ";
    cout << count;

    return 0;
}