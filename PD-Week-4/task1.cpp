#include <iostream>
using namespace std;

void IsEqual(int num1, int num2)
{
    if (num1 != num2)
    {
        cout << "false";
    }
    else
    {
        cout << "true";
    }
}

main()
{
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    IsEqual(num1, num2);
}
