// given marks of 10 students if the mark of any student is less thn 35 print the roll no roll no refers to index
#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "enter the element:\n"
             << i + 1;

        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < 35)
        {

            cout << i << " ";
        }
    }
    return 0;
}