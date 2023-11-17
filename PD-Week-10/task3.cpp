#include <iostream>
using namespace std;
bool isRepeatingCycle(int arr[], int cycleLength, int arrLength)
{
    int trueCount = 0;
    int loopCondition = arrLength - cycleLength;
    for (int i = 0; i < loopCondition; i++)
    {
        if (arr[i] == arr[i + cycleLength])
        {
            trueCount++;
        }
        else
            continue;
    }
    if (trueCount == loopCondition)
        return true;
    else
        return false;
}
int main()
{
    int arrLength, cycleLength;
    cout << "Enter the length of the array: ";
    cin >> arrLength;
    cout << "Enter the elements of the array: " << endl;
    int arr[arrLength];
    for (int i = 0; i < arrLength; i++)
        cin >> arr[i];
    cout << "Enter the length of the cycle: ";
    cin >> cycleLength;
    if (cycleLength > arrLength)
        cout << "1";
    else
        cout << "Output: " << isRepeatingCycle(arr, cycleLength, arrLength);
}