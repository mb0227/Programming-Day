#include <iostream>
using namespace std;

string findBrokenKeys(string correctPhrase, string actualTyped)
{
    string brokenKeys = "";
    for (int i = 0; i < correctPhrase.length(); i++)
    {
        char currentChar = correctPhrase[i];
        bool found = false;

        for (int j = 0; j < actualTyped.length(); j++)
        {
            if (currentChar == actualTyped[j])
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            bool alreadyAdded = false;
            for (int k = 0; k < brokenKeys.length(); k++)
            {
                if (currentChar == brokenKeys[k])
                {
                    alreadyAdded = true;
                    break;
                }
            }

            if (!alreadyAdded)
            {
                brokenKeys += currentChar;
            }
        }
    }
    return brokenKeys;
}

int main()
{
    string correctPhrase, actualTyped;
    cout << "Enter the correct phrase: ";
    getline(cin, correctPhrase);
    cout << "Enter what you actually typed: ";
    getline(cin, actualTyped);
    string result = findBrokenKeys(correctPhrase, actualTyped);
    cout << "Broken Keys: " << result << endl;
    return 0;
}
