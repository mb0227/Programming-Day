#include <iostream>
using namespace std;

double calculateVolume(double length, double width, double height)
{
    double volume = length * height * width;
    return volume;
}

main()
{
    double length, width, height, result;
    string unit;
    cout << "Enter the length of pyramid (in meters): ";
    cin >> length;
    cout << "Enter the width of pyramid (in meters): ";
    cin >> width;
    cout << "Enter the height of pyramid (in meters): ";
    cin >> height;
    cout << "Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin >> unit;
    result = calculateVolume(length, width, height);
    if (unit == "millimeters")
    {
        double resultInMillimeters = (result * 1000000000) / 3;
        cout << "The volume of pyramid is: " << resultInMillimeters << " cubic millimeters";
    }
    if (unit == "centimeters")
    {
        double resultInCentimeters = (result * 1000000) / 3;
        cout << "The volume of pyramid is: " << resultInCentimeters << " cubic centimeters";
    }
    if (unit == "meters")
    {
        double resultInMeters = result / 3;
        cout << "The volume of pyramid is: " << resultInMeters << " cubic meters";
    }
    if (unit == "kilometers")
    {
        double resultInKilometers = result / 3000000000;
        cout << "The volume of pyramid is: " << resultInKilometers << " cubic kilometers";
    }
}
