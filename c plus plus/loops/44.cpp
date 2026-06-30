//rhombus
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the row number:";
    cin >> n;
    //rows
    for (int i = 1; i <= n; i++) {
           //spaces    
        for (int j = 1; j <= n - i + 1; j++) {
            cout << " " << " ";
}

for (int j = 1; j <= n; j++) {
    cout << "*"<< " " ;
}//stars
cout << endl;
}


return 0;
}