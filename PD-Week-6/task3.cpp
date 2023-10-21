#include <iostream>
using namespace std;

string findZodiacSign(int day, string month);

main()
{
    string month;
    int day;
    cout << "Enter the day of birth: ";
    cin >> day;
    cout << "Enter the month of birth (e.g., January, February): ";
    cin >> month;
    cout << "Zodiac Sign: " << findZodiacSign(day, month);
}

string findZodiacSign(int day, string month)
{
    if ((month == "March" && day >= 21) || (month == "April" && day < 20))
    {
        return "Aries";
    }
    if ((month == "April" && day >= 20) || (month == "May" && day < 21))
    {
        return "Taurus";
    }
    if ((month == "May" && day >= 21) || (month == "June" && day < 21))
    {
        return "Gemini";
    }
    if ((month == "June" && day >= 21) || (month == "July" && day < 23))
    {
        return "Cancer";
    }
    if ((month == "July" && day >= 23) || (month == "August" && day < 23))
    {
        return "Leo";
    }
    if ((month == "August" && day >= 23) || (month == "September" && day < 23))
    {
        return "Virgo";
    }
    if ((month == "September" && day >= 23) || (month == "April" && day < 23))
    {
        return "Libra";
    }
    if ((month == "October" && day >= 23) || (month == "November" && day < 22))
    {
        return "Scorpio";
    }
    if ((month == "November" && day >= 22) || (month == "December" && day < 22))
    {
        return "Sagittarius";
    }
    if ((month == "December" && day >= 22) || (month == "January" && day < 20))
    {
        return "Capricon";
    }
    if ((month == "January" && day >= 20) || (month == "February" && day < 19))
    {
        return "Aquarius";
    }
    if ((month == "February" && day >= 19) || (month == "March" && day < 21))
    {
        return "Pisces";
    }
}