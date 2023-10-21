#include <iostream>
#include <cmath>
using namespace std;

int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);

main()
{
    string yearType;
    int holidays, hometownWeekends;
    cout << "Enter year type: ";
    cin >> yearType;
    cout << "Enter number of holidays: ";
    cin >> holidays;
    cout << "Enter number of weekends: ";
    cin >> hometownWeekends;
    cout << calculateVolleyballGames(yearType, holidays, hometownWeekends);
}

int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
    float freeHolidays, freeWeekends, leapPlayTime, totalPlayTime;
    freeHolidays = holidays * 0.667;
    freeWeekends = 48 - hometownWeekends;
    freeWeekends = 0.75 * freeWeekends;
    totalPlayTime = freeHolidays + freeWeekends + hometownWeekends;
    leapPlayTime = totalPlayTime + totalPlayTime * 0.15;
    if (yearType == "normal")
    {
        return totalPlayTime;
    }
    if (yearType == "leap")
    {
        return leapPlayTime;
    }
}