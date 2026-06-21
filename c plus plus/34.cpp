
// login system ISKO TGDA BANANA HAII AFTER ARRAY!
/*user validation
 password validation*/
#include <iostream>
using namespace std;
int main()
{
    int user_ID, password;

    char ch1, ch2;

    ch1 = 'manya';// we have to use array to check tht the form of password is correct or not
    ch2 = 'p';
    cout << "\nenter your password:";
    cin >> password;

    
    cout << "\nenter your user ID you wnt to set:";
    cin >> user_ID;

    

    if (user_ID == ch1 || user_ID == ch2)
    {
        cout << "\neligible for login";
        if (password == 1234)
    {
        cout << "\nur password is correct youre our employeee yaaayy";
    }
    else if (user_ID == ch1 || user_ID == ch2 && password == 1234)
    {
        cout << "\nsucesfully login";
    }
    else if (password != 1234)
    {
        cout << "\nwrong passwrd enter right password plssssssss";
    }
}
    else
    {
        cout << "\nwrong details";
    }

    return 0;
}
