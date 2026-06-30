// count occurences of number repetation of number
#include <iostream>
using namespace std;
int main()
{
    int num[100], n, var, count = 0;
    cout << "enter elements from 1 to 100:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    cout << "enter element you want to check";
    cin >> var;
    for (int i = 0; i < n; i++)
    {
        if (var == num[i])
        {
            count++;
        }
        cout << count << " ";
    }
    return 0;
}