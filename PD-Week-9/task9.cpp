#include <iostream>
#include <string>
using namespace std;
string longest7SegmentWord(string arr[], int size)
{
    int count = 0;
    string word = "";
    int maxLength = 0;
    for (int iterations = 0; iterations < size; iterations++)
    {
        string currentWord = arr[iterations];
        bool found = false;
        for (int i = 0; i < currentWord.length(); i++)
        {
            char x = currentWord[i];
            if ((x == 'k') || (x == 'm') || (x == 'v') || (x == 'w') || (x == 'x'))
            {
                found = true;
                break;
            }
        }
        if ((!found) && (currentWord.length() > maxLength))
        {
            maxLength = currentWord.length();
            count++;
            word = currentWord;
        }
    }
    return word;
}
int main()
{
    int size;
    cout << "Enter the number of words: ";
    cin >> size;
    string arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    string result = longest7SegmentWord(arr, size);
    cout << result;
    return 0;
}