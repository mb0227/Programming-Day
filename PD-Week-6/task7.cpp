#include <iostream>
using namespace std;

string calculateHotelPrices(string month, int numberOfStays);

int main()
{
    string month;
    int numberOfStays;
    cout << "Enter the month (May, June, July, August, September, October): ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> numberOfStays;
    string result = calculateHotelPrices(month, numberOfStays);
    cout << result;
}

string calculateHotelPrices(string month, int numberOfStays)
{
    float priceStudio, priceApartment;
    string result;

    if (month == "May" || month == "October")
    {
        if (numberOfStays <= 7)
        {
            priceStudio = 50 * numberOfStays;
            priceApartment = 65 * numberOfStays;
        }
        else if (numberOfStays <= 14)
        {
            priceStudio = 50 * numberOfStays - 0.05 * 50 * numberOfStays;
            priceApartment = 65 * numberOfStays;
        }
        else
        {
            priceStudio = 50 * numberOfStays - 0.3 * 50 * numberOfStays;
            priceApartment = 65 * numberOfStays - 0.1 * 65 * numberOfStays;
        }
    }
    else if (month == "June" || month == "September")
    {
        if (numberOfStays <= 14)
        {
            priceStudio = 75.20 * numberOfStays;
            priceApartment = 68.70 * numberOfStays;
        }
        else
        {
            priceStudio = 75.20 * numberOfStays - 0.2 * 75.20 * numberOfStays;
            priceApartment = 68.70 * numberOfStays - 0.1 * 68.70 * numberOfStays;
        }
    }
    else if (month == "July" || month == "August")
    {
        priceStudio = 76 * numberOfStays;
        if (numberOfStays > 14)
        {
            priceApartment = 77 * numberOfStays - 0.1 * 77 * numberOfStays;
        }
        else
        {
            priceApartment = 77 * numberOfStays;
        }
    }

    result = "Apartment: $" + to_string(priceApartment) + "\nStudio: $" + to_string(priceStudio);
    return result;
}
