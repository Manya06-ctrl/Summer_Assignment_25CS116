// copy one array into another
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {3, 4, 5, 6, 7}, b[5];
    cout << "elements of 1st array are:";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    // arr[5] = b[5]; THIS IS BULLSHIT!
    for (int i = 0; i < 5; i++)
    {
        b[i] = arr[i];
    }
    cout << "element of 2nd array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}