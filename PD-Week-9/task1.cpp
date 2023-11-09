#include <iostream>
using namespace std;
bool isLengthEven(string fruit)
{
    int length = fruit.length();
    if (length % 2 == 0)
        return true;
    else
        return false;
}
int main()
{
    string fruit;
    cout << "Enter a String: ";
    cin >> fruit;
    cout << isLengthEven(fruit);
    return 0;
}
