#include <iostream>
using namespace std;

int Primorial(int number)
{
    int primeNumbers = 0, numberOfPrimeNumbers = 0, y = 1;
    while (numberOfPrimeNumbers <= number)
    {
        if ((primeNumbers == 2 || primeNumbers == 3) || (primeNumbers % 2 != 0 && primeNumbers % 3 != 0))
        {
            numberOfPrimeNumbers = numberOfPrimeNumbers + 1;
            y = y * primeNumbers;
        }
        primeNumbers++;
    }
    return y;
}
int main()
{
    int number;
    cout << "Enter Number: ";
    cin >> number;
    cout << Primorial(number);
    return 0;
}