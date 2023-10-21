#include <iostream>
using namespace std;

void amplify(int num)
{
    for (int i = 1; i <= num; i++)
    {
        int x = i;
        if (i % 4 == 0)
        {
            x = i * 10;
        }
        cout << x << ", ";
    }
}

int main()
{
    int num;
    cout << "Enter the number to amplify: ";
    cin >> num;
    amplify(num);
    return 0;
}