#include <iostream>
using namespace std;

float amountDue(char serviceCode, char timeOfCall, float minutesUsed)
{
    float amount;
    float extraMinutes;
    if ((serviceCode == 'R') || (serviceCode == 'r'))
    {
        if (minutesUsed <= 50)
        {
            amount = 10;
            return amount;
        }
        else
        {
            extraMinutes = minutesUsed - 50;
            amount = 10 + (0.20 * extraMinutes);
            return amount;
        }
    }
    if (((serviceCode == 'P') || (serviceCode == 'p')) && ((timeOfCall == 'D') || (timeOfCall == 'd')))
    {
        if (minutesUsed <= 75)
        {
            amount = 25;
            return amount;
        }
        else
        {
            extraMinutes = minutesUsed - 75;
            amount = 25 + (0.10 * extraMinutes);
            return amount;
        }
    }
    if (((serviceCode == 'P') || (serviceCode == 'p')) && ((timeOfCall == 'N') || (timeOfCall == 'n')))
    {
        if (minutesUsed <= 100)
        {
            amount = 25;
            return amount;
        }
        else
        {
            amount = 25 + (0.05 * extraMinutes);
            return amount;
        }
    }
}

main()
{
    char serviceCode, timeOfCall;
    float minutesUsed;
    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> serviceCode;
    if ((serviceCode == 'p') || (serviceCode == 'P'))
    {
        cout << "Enter time of the call (D/d for day, N/n for night): ";
        cin >> timeOfCall;
        cout << "Enter the number of minutes used: ";
        cin >> minutesUsed;
    }
    else
    {
        cout << "Enter the number of minutes used: ";
        cin >> minutesUsed;
    }
    float result = amountDue(serviceCode, timeOfCall, minutesUsed);
    if ((serviceCode == 'P') || (serviceCode == 'p'))
    {
        cout << "Service Type: Premium" << endl;
    }
    if ((serviceCode == 'R') || (serviceCode == 'r'))
    {
        cout << "Service Type: Regular" << endl;
    }
    cout << "Total Minutes Used: " << minutesUsed << " minutes" << endl;
    cout << "Amount Due: $" << result << endl;
}