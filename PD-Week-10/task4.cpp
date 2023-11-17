#include <iostream>
using namespace std;
int main()
{
    int boxNum, totalElements, num = 0, sum = 0;
    cout << "Enter the number of boxes: ";
    cin >> boxNum;
    totalElements = boxNum * 3;
    int arr[totalElements];
    cout << "Enter the dimensions of the boxes (length, width, height): " << endl;
    for (int i = 0; i < totalElements; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < totalElements; i = i + 3)
    {
        num = arr[i] * arr[i + 1] * arr[i + 2];
        sum += num;
    }
    cout << "Total volume of all boxes: " << sum;
    return 0;
}