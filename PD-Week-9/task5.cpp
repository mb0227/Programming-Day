#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;

    string commonChars = "";

    for (int i = 0; i < s1.length(); i++)
    {
        char x = s1[i];
        for (int j = 0; j < s2.length(); j++)
        {
            char y = s2[j];
            if (x == y)
            {
                commonChars += x;
                break;
            }
        }
    }

    int length = commonChars.length();
    cout << "Number of common characters: " << length << endl;

    return 0;
}
