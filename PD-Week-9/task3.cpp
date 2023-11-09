#include <iostream>
using namespace std;
bool areAllElementsIdentical(string arr[], int size)
{
    bool isTrue;
    int trueCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == arr[size - 1])
        {
            trueCount++;
        }
        else
            return false;
    }
    if (trueCount == size)
        return true;
    else
        return false;
}
int main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    string arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << areAllElementsIdentical(arr, size);
    return 0;
}