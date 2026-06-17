// roots of quadratic equation  b2-4ac=d
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c, D, x, y;
    cout << "enter a,b and c :";
    cin >> a >> b >> c;
    D = b * b - 4 * a * c;

    if (a > 0 && D > 0)
    {
        x = (-b + sqrt(D)) / (2 * a);
        y = (-b - sqrt(D)) / (2 * a);
        cout << y;
        cout << x;
        cout << "roots are real and unequal";
    }

    else if (a > 0 && D == 0)
    {
        x = (-b + sqrt(D)) / (2 * a);
        y = (-b + sqrt(D)) / (2 * a);
        cout << x;
        cout << y;
        cout << " roots are real and equal";
    }
    else if (a > 0 && D < 0)
    {
        cout << "imaginary roots";
    }
    return 0;
}
