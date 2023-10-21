#include <iostream>
using namespace std;
void printRows(int numberOfRows)
{
    int x = numberOfRows;
    for (int i = 1; i <= numberOfRows; i++)
    {
        for (int j = numberOfRows; j >= i; j--)
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
    printRows(numberOfRows);
    return 0;
}
