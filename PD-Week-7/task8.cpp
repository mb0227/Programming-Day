#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double countOfCargo, cargoForDay = 0, amountForBus = 0, amountForTruck = 0, amountForTrain = 0, totalAmountBus = 0, totalAmountTruck = 0, totalAmountTrain = 0, sumOfCargo = 0, totalCargoByBus = 0, totalCargoByTruck = 0, totalCargoByTrain = 0;
    cout << "Enter the count of cargo for transportation: ";
    cin >> countOfCargo;

    for (double cargoNumber = 1; cargoNumber <= countOfCargo; cargoNumber++)
    {
        cout << "Enter the tonnage for cargo " << cargoNumber << ": ";
        cin >> cargoForDay;
        sumOfCargo = sumOfCargo + cargoForDay;
        if (cargoForDay <= 3)
        {
            totalCargoByBus = totalCargoByBus + cargoForDay;
            amountForBus = cargoForDay * 200;
            totalAmountBus = totalAmountBus + amountForBus;
        }
        if (cargoForDay > 3 && cargoForDay <= 11)
        {
            totalCargoByTruck = totalCargoByTruck + cargoForDay;
            amountForTruck = cargoForDay * 175;
            totalAmountTruck = totalAmountTruck + amountForTruck;
        }
        if (cargoForDay > 11)
        {
            totalCargoByTrain = totalCargoByTrain + cargoForDay;
            amountForTrain = cargoForDay * 120;
            totalAmountTrain = totalAmountTrain + amountForTrain;
        }
    }
    double totalCargoByMiniBusPercent = (totalCargoByBus / sumOfCargo) * 100;
    double totalCargoByTruckPercent = (totalCargoByTruck / sumOfCargo) * 100;
    double totalCargoByTrainPercent = (totalCargoByTrain / sumOfCargo) * 100;
    double totalAmount = totalAmountBus + totalAmountTruck + totalAmountTrain;
    double average = totalAmount / sumOfCargo;
    cout << fixed;
    cout << setprecision(2);
    cout << average << endl
         << totalCargoByMiniBusPercent << endl
         << totalCargoByTruckPercent << endl
         << totalCargoByTrainPercent;
    return 0;
}