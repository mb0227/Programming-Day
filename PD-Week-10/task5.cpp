#include <iostream>
using namespace std;

int main()
{
    int arr[10];

    cout << "Enter the weights of the 10 packages: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 9; i++)
    {
        int x = i;

        for (int j = i + 1; j < 10; j++)
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

    cout << "Sorted array in ascending order:[" << arr[0];
    for (int i = 1; i < 10; i++)
    {
        cout << ", " << arr[i];
    }
    cout << "]";

    return 0;
}
