#include <iostream>
using namespace std;
bool canBeRearranged(int length);
int main()
{
    int length;
    cout << "Enter the length of the array: ";
    cin >> length;
    cout << "Enter the elements of the array: " << endl;
    cout << "Can be arranged: " << canBeRearranged(length);
    return 0;
}
bool canBeRearranged(int length)
{
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < length - 1; i++)
    {
        int x = i;
        for (int j = i + 1; j < length; j++)
        {
            if (arr[j] < arr[x])
            {
                x = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[x];
        arr[x] = temp;
    }
    int trueCount = 0;
    for (int i = 0; i < length - 1; i++)
    {
        if (arr[i] + 1 == arr[i + 1])
            trueCount++;
    }
    if (trueCount == length - 1)
        return true;
    else
        return false;
}