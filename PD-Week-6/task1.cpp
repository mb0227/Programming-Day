#include <iostream>
using namespace std;

string activity(string temperature, string humidity);

main()
{
    string temperature, humidity;
    cout << "Enter temperature (warm or cold): ";
    cin >> temperature;
    cout << "Enter humidity (dry or humid): ";
    cin >> humidity;
    cout << "Recommended activity: " << activity(temperature, humidity);
}

string activity(string temperature, string humidity)
{
    if ((temperature == "warm") && (humidity == "dry"))
    {
        return "Play tennis";
    }
    else if ((temperature == "warm") && (humidity == "humid"))
    {
        return "Swim";
    }
    else if ((temperature == "cold") && (humidity == "dry"))
    {
        return "Play basketball";
    }
    else if ((temperature == "cold") && (humidity == "humid"))
    {
        return "Watch TV";
    }
}
