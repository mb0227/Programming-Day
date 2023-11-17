#include <iostream>
using namespace std;
int progress(int arr[], int number);
int main()
{
    int number;
    cout << "Enter the number of Saturdays: ";
    cin >> number;
    int arr[number];
    for (int i = 0; i < number; i++)
    {
        cout << "Enter miles run for Saturday " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Total progress days: " << progress(arr, number);
    return 0;
}

int progress(int arr[], int number)
{
    int progressDays = 0;
    for (int i = 0; i < number - 1; i++)
    {
        if (arr[i + 1] > arr[i])
        {
            progressDays++;
        }
    }
    return progressDays;
}
