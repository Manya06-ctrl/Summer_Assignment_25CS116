// write a program for atm stimulation
#include <iostream>
using namespace std;
int main()
{
    int pin, amount, balance = 700000, num, remaining_balance;
    cout << "enter the pin:";

    cin >> pin;
    cout << "\namount to be withdrawn:";
    cin >> amount;

    if (pin != 1234) // agr yaha pin==1234 ho jayege agge ka loop execute ni krega
    {
        cout << "pin is incorrect ";
    }
    else // else mai kbhi condition nhi likh skte
    {
        cout << "your pin is correct.";
        cout << "\nenter amunt to be withdrawn:";
        cout << amount;

        if (balance < amount)
        {
            cout << " \ninsufficent balance";
        }
        else

        {
            cout << "\nAmount withdrawn sucessfully";
            cout << "\nenter 1 to check balance";
            cout << "\nenter 2 to check remaining balance";
            cout << "\nenter 3 to check both";
            cout << "\nchoice:";
            cin >> num;

            if (num == 1)
            {

                cout << "your balance is:" << balance;
            }
            else if (num == 2)
            {
                cout << "\nyour remaining balance is:";
                remaining_balance = balance - amount;
                cout << remaining_balance;
            }
            else if (num == 3)
            {
                cout << "\nyour balance and remaining balance is:";
                remaining_balance = balance - amount;
                cout << balance << endl;
                cout << remaining_balance;
            }
            else
            {
                cout << "invaild choice";
            }
        }
    }

    return 0;
}
