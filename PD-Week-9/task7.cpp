#include <iostream>
using namespace std;
void convertPINToDance(string pin)
{
    int selectMove = 0;
    string moves[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    int x = pin[0] - '0';
    selectMove = x + 0;
    cout << moves[selectMove];
    for (int i = 1; pin[i] != '\0'; i++)
    {
        x = pin[i] - '0';
        selectMove = x + i;
        if (selectMove <= 9)
            cout << ", " << moves[selectMove];
        else
        {
            selectMove = i - 1;
            cout << ", " << moves[selectMove];
        }
    }
}

int main()
{
    string pin;
    cout << "Enter your PIN (4 digits): ";
    cin >> pin;
    if (pin.length() != 4) 
    {
        cout << "Please enter a 4-digit PIN." << endl;
    }
    else
        convertPINToDance(pin);
    return 0;
}