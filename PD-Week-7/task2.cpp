#include <iostream>
using namespace std;
void printRows1ToX(int numberOfRows)
{

    for (int i = 1; i <= numberOfRows / 2; i++)
    {
        for (int j = 1; j <= (numberOfRows / 2) - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void printRows2toX(int numberOfRows)
{
    for (int i = numberOfRows / 2; i >= 1; i--)
    {
        for (int j = 1; j <= (numberOfRows / 2) - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int numberOfRows;
    cout << "Enter desired number of rows: ";
    cin >> numberOfRows;
    printRows1ToX(numberOfRows);
    printRows2toX(numberOfRows);
    return 0;
}