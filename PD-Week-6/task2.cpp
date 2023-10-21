#include <iostream>
using namespace std;

float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float average);

int main()
{
    string name;
    float marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter marks for English: ";
    cin >> marksEnglish;
    cout << "Enter marks for Maths: ";
    cin >> marksMaths;
    cout << "Enter marks for Chemistry: ";
    cin >> marksChemistry;
    cout << "Enter marks for Social Science: ";
    cin >> marksSocialScience;
    cout << "Enter marks for Biology: ";
    cin >> marksBiology;
    float average = calculateAverage(marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology);
    string grade = calculateGrade(average);
    cout << "Student Name: " << name << endl;
    cout << "Percentage: " << average << "%" << endl;
    cout << "Grade: " << grade << endl;
}

float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology)
{
    float average = (marksEnglish + marksMaths + marksChemistry + marksSocialScience + marksBiology) / 5.0;
    return average;
}

string calculateGrade(float average)
{
    if (average >= 90)
    {
        return "A+";
    }
    if (average >= 80)
    {
        return "A";
    }
    if (average >= 70)
    {
        return "B+";
    }
    if (average >= 60)
    {
        return "B";
    }
    if (average >= 50)
    {
        return "C";
    }
    if (average >= 40)
    {
        return "D";
    }
    if (average < 40)
    {
        return "F";
    }
}
