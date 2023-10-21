#include <iostream>
using namespace std;

float calculateFruitPrice(string fruit, string dayOfWeek, double quantity);

main()
{
    string fruit, dayOfWeek;
    double quantity;
    cout << "Enter the fruit name: ";
    cin >> fruit;
    cout << "Enter the day of the week (e.g., Monday, Sunday): ";
    cin >> dayOfWeek;
    cout << "Enter the quantity: ";
    cin >> quantity;
    if (((dayOfWeek == "Monday") || (dayOfWeek == "Tuesday") || (dayOfWeek == "Wednsday") || (dayOfWeek == "Thursday") || (dayOfWeek == "Friday") || (dayOfWeek == "Saturday") || (dayOfWeek == "Sunday")) && ((fruit == "banana") || (fruit == "apple") || (fruit == "kiwi") || (fruit == "grapefruit") || (fruit == "pineapple") || (fruit == "grapes")))
    {
        float result = calculateFruitPrice(fruit, dayOfWeek, quantity);
        cout << result;
    }
    else
    {
        cout << "Error";
    }
}

float calculateFruitPrice(string fruit, string dayOfWeek, double quantity)
{
    float price;
    if ((dayOfWeek == "Monday") || (dayOfWeek == "Tuesday") || (dayOfWeek == "Wednsday") || (dayOfWeek == "Thursday") || (dayOfWeek == "Friday"))
    {
        if (fruit == "banana")
        {
            price = 2.50 * quantity;
            return price;
        }
        if (fruit == "apple")
        {
            price = 1.20 * quantity;
            return price;
        }
        if (fruit == "orange")
        {
            price = 0.85 * quantity;
            return price;
        }
        if (fruit == "grapefruit")
        {
            price = 1.45 * quantity;
            return price;
        }
        if (fruit == "kiwi")
        {
            price = 2.70 * quantity;
            return price;
        }
        if (fruit == "pineapple")
        {
            price = 5.50 * quantity;
            return price;
        }
        if (fruit == "grapes")
        {
            price = 3.85 * quantity;
            return price;
        }
    }
    if ((dayOfWeek == "Saturday") || (dayOfWeek == "Sunday"))
    {

        if (fruit == "banana")
        {
            price = 2.70 * quantity;
            return price;
        }
        if (fruit == "apple")
        {
            price = 1.25 * quantity;
            return price;
        }
        if (fruit == "orange")
        {
            price = 0.90 * quantity;
            return price;
        }
        if (fruit == "grapefruit")
        {
            price = 1.60 * quantity;
            return price;
        }
        if (fruit == "kiwi")
        {
            price = 3.00 * quantity;
            return price;
        }
        if (fruit == "pineapple")
        {
            price = 5.60 * quantity;
            return price;
        }
        if (fruit == "grapes")
        {
            price = 4.20 * quantity;
            return price;
        }
    }
}
