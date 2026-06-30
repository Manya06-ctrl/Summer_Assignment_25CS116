// 2nd largest element
#include <iostream>
using namespace std;
int main()
{
    int arr[5], i, ss;
    for (int i = 0; i < 5; i++)
    {
        cout << "enter the element:" << i + 1 << " ";
        cin >> arr[i];
    }

    int smallest = arr[0];
    cout << "smallest element:";
    for (i = 0; i < 5; i++)
    {
        if (smallest > arr[i])
        {
            ss = smallest;
            smallest = arr[i];
        }
    }
    cout << smallest;
    cout << ss;

    return 0;
}