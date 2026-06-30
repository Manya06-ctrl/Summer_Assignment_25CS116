// print both reverse and normal array
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "enter the element:\n"
             << i + 1;
        cin >> arr[i];
    }
    cout << "reverse of array is :\n";

    for (int i = 4; i >= 0; i--) // reverse of array

    {

        cout << arr[i] << " ";
    }
    cout << " array is :";
    for (int i = 0; i < 5; i++) // reverse of array

    {
        cout << arr[i] << " ";
    }

    return 0;
}