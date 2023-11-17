#include <iostream>
using namespace std;

int main()
{
    string sentence, word = "";
    int length;
    cout << "Enter a string: ";
    getline(cin, sentence);
    length = sentence.length();
    cout << "Reversed string: ";
    for (int i = length - 1; i >= 0; i--)
    {
        if (sentence[i] != ' ')
        {
            word = sentence[i] + word;
        }
        else
        {
            cout << word << " ";
            word = "";
        }
    }
    cout << word;

    return 0;
}
