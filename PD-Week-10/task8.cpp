#include <iostream>
using namespace std;
int main()
{
    int length;
    float rightCount = 0, leftCount = 0, angle;
    cout << "Enter the length of the array: ";
    cin >> length;
    string arr[length];
    cout << "Enter the elements of the array (\"left\" or \"right\"): " << endl;
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == "right")
            rightCount++;
        else
            leftCount++;
    }
    if (rightCount > leftCount)
        angle = (rightCount * 90 - leftCount * 90) / 360;
    else
        angle = (leftCount * 90 - rightCount * 90) / 360;
    cout << "Number of full rotations: " << angle;
    return 0;
}