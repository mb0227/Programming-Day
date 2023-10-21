#include <iostream>
using namespace std;

string calculateHotelPrices(string month, int numberOfStays);

main()
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
    if ((month == "October") || (month == "May"))
    {
        if (numberOfStays < 7)
        {
            priceStudio = 50 * numberOfStays;
            priceApartment = 65 * numberOfStays;
            result = "Apartment: " + to_string(priceApartment) + "$. \nStudio: " + to_string(priceStudio) + "$.";
            return result;
        }
        if ((numberOfStays > 7) || (numberOfStays < 14))
        {
            priceStudio = 50 * numberOfStays;
            priceStudio = priceStudio - priceStudio * 0.05;
            priceApartment = 65 * numberOfStays;
            result = "Apartment: " + to_string(priceApartment) + "$. \nStudio: " + to_string(priceStudio) + "$.";
            return result;
        }
        if (numberOfStays > 14)
        {
            priceStudio = 50 * numberOfStays;
            priceStudio = priceStudio - priceStudio * 0.3;
            priceApartment = 65 * numberOfStays;
            priceApartment = priceApartment - priceApartment * 0.1;
            result = "Apartment: " + to_string(priceApartment) + "$. \nStudio: " + to_string(priceStudio) + "$.";
            return result;
        }
    }

    if ((month == "June") || (month == "September"))
    {
        if (numberOfStays <= 14)
        {
            priceStudio = 75.20 * numberOfStays;
            priceApartment = 68.70 * numberOfStays;
            result = "Apartment: " + to_string(priceApartment) + "$. \nStudio: " + to_string(priceStudio) + "$.";
            return result;
        }

        if (numberOfStays > 14)
        {
            priceStudio = 75.20 * numberOfStays;
            priceStudio = priceStudio - priceStudio * 0.2;
            priceApartment = 68.70 * numberOfStays;
            priceApartment = priceApartment - priceApartment * 0.1;
            result = "Apartment: " + to_string(priceApartment) + "$. \nStudio: " + to_string(priceStudio) + "$.";
            return result;
        }
    }
    if ((month == "July") || (month == "August"))
    {
        priceStudio = 76 * numberOfStays;
        if (numberOfStays < 14)
        {
            priceApartment = 77 * numberOfStays;
        }
        if (numberOfStays > 14)
        {
            priceApartment = 77 * numberOfStays;
            priceApartment = priceApartment - 0.1 * priceApartment;
        }
        result = "Apartment: " + to_string(priceApartment) + "$. \nStudio: " + to_string(priceStudio) + "$.";
        return result;
    }
}