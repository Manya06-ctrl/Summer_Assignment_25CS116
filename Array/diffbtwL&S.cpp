// diff btw largest and smallest element
#include <iostream>
using namespace std;
int main()
{
    int arr[5], diff;

    for (int i = 0; i < 5; i++)
    {
        cout << "enter the elements:\n"
             << i + 1;
        cin >> arr[i];
    }
    int smallest = arr[0]; // firstly hmne compare ke liye let kiyaa ki arr[0]=smallest hai
    int largest = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < smallest) // agr 5 element mai se koi vi chota hai toh smallest update ho jayega
        {
            smallest = arr[i];
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "smallest digit is :" << smallest;
    cout << "\n largest digit is:" << largest;
    diff = largest - smallest;
    cout << "difference btw 2 element is " << diff;

    return 0;
}