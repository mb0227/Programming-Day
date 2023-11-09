#include <iostream>
using namespace std;
int coloringTime(string cols[], int size)
{
    int totalTime = 0;
    if (size == 1)
        return 2;
    else
    {
        for (int i = 0; i < size; i++)
        {
            totalTime = totalTime + 2;
            if (cols[i] != cols[i + 1])
            {
                totalTime++;
            }
        }
    }
    return totalTime - 1;
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
    int result = coloringTime(arr, size);
    cout << "Time to color: " << result << " seconds";
    return 0;
}