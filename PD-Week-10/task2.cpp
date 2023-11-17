#include <iostream>
using namespace std;

int func(string wordToCheck, int asciiCode)
{
    int count = 0;
    for (int j = 0; j < wordToCheck.length(); j++)
    {
        char letterToCheck = wordToCheck[j];
        int wordInInt = letterToCheck;
        if (asciiCode == wordInInt)
            count++;
    }
    return count;
}
int main()
{
    int times, count = 0;
    cout << "Enter how many words you want to enter: ";
    cin >> times;
    string arr[times];
    char letter;
    for (int i = 0; i < times; i++)
    {
        cout << "Enter word " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Enter a letter you want to count: ";
    cin >> letter;
    int asciiCode = letter;
    for (int i = 0; i < times; i++)
    {
        string wordToCheck = arr[i];
        count = count + func(wordToCheck, asciiCode);
    }
    cout << letter << " shows up " << count << " times in the data.";
    return 0;
}