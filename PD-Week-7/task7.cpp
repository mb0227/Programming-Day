#include <iostream>
using namespace std;

int main()
{
    int days, doctors = 7, treatedPatients = 0, untreatedPatients = 0;
    cout << "Enter number of days you visited hospital: ";
    cin >> days;

    for (int day = 1; day <= days; day++)
    {
        int patients;
        cout << "Enter the number of patients for day " << day << ": ";
        cin >> patients;

        if (day % 3 == 0 && untreatedPatients > treatedPatients)
        {
            doctors++;
        }

        if (patients <= doctors)
        {
            treatedPatients = treatedPatients + patients;
        }
        else
        {
            treatedPatients = treatedPatients + doctors;
            untreatedPatients = untreatedPatients + patients - doctors;
        }
    }

    cout << "Treated patients: " << treatedPatients << "." << endl;
    cout << "Untreated patients: " << untreatedPatients << "." << endl;

    return 0;
}
