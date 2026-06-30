// enter the number prime or composite
#include <iostream>
using namespace std;
int main()
{
    int n, a = 0;
    cout << "enter n:";
    cin >> n;
    for (int i = 2; i <= (n - 1); i++)
    {
        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }
    if (n == 1)
    {
        cout << "neither prime not composite";
    }
    else if (a == 0)
    {
        cout << "prime";
    }
    else
    {
        cout << "composite";
    }
}