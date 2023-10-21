#include <iostream>
using namespace std;

bool isPrime(int number)
{
    if (number == 2 || number == 3)
    {
        return true;
    }
    else if (number % 2 != 0 && number % 3 != 0)
    {
        return true;
    }
    else if (number % 2 == 0 || number % 3 == 0)
    {
        return false;
    }
}
int main()
{
    int number;
    cout << "Enter Number: ";
    cin >> number;
    cout << isPrime(number);
    return 0;
}