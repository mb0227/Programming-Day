#include <iostream>
using namespace std;

int triangle(int num)
{
    int dot = 0;
    for (int i = 1; i <= num; i++)
    {
        dot = dot + i;
    }
    return dot;
}
int main()
{
    int num;
    cout << "Enter number of triange: ";
    cin >> num;
    int result = triangle(num);
    cout << result;
    return 0;
}