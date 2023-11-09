#include <iostream>
using namespace std;
bool numGreaterthan9(int x, int size)
{
    int rem;
    bool isTrue = false;
    while (x > 0)
    {
        rem = x % 10;
        x = x / 10;
        if (rem % 7 == 0)
            isTrue = true;
        else
            isTrue = false;
    }
    return isTrue;
}

int main()
{
    int size, length;
    bool isFound = false;
    cout << "Enter the size of Array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    for (int j = 0; j < size; j++)
    {
        if (arr[j] > 9)
        {
            int x = arr[j];
            if (numGreaterthan9(x, size))
            {
                cout << "Boom!";
                return 0;
            }
            else
                isFound = false;
        }
        else
        {
            if (arr[j] % 7 == 0)
            {
                cout << "Boom!";
                return 0;
            }
            else
                isFound = false;
        }
    }
    if (!isFound)
    {
        cout << "there is no 7 in the array";
    }
    return 0;
}