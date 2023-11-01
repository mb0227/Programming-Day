#include <iostream>
using namespace std;

string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute);

main()
{
    int examHour, examMinute, studentMinute, studentHour;
    cout << "Enter Exam Starting Time (hour): ";
    cin >> examHour;
    cout << "Enter Exam Starting Time (minutes): ";
    cin >> examMinute;
    cout << "Enter student hour of arrival: ";
    cin >> studentHour;
    cout << "Enter student hour of arrival: ";
    cin >> studentMinute;
    cout << checkStudentStatus(examHour, examMinute, studentHour, studentMinute);
}

string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute)
{
    int totalExamMinutes, totalStudentMinutes, timeDifference, timeInHours, timeInMinutes;
    totalExamMinutes = (examHour * 60) + examMinute;
    totalStudentMinutes = (studentHour * 60) + studentMinute;
    if (totalExamMinutes == totalStudentMinutes)
    {
        return "On time";
    }
    else if (totalExamMinutes > totalStudentMinutes)
    {

        if (totalStudentMinutes < 60)
        {

            return "Early \n" + to_string(totalStudentMinutes) + " minutes before the start";
        }
        else
        {
            timeDifference = totalExamMinutes - totalStudentMinutes;
            timeInHours = timeDifference / 60;
            timeInMinutes = timeDifference % 60;
            return "Early \n" + to_string(timeInHours) + ":" + to_string(timeInMinutes) + " hours before the start";
        }
    }
    else if (totalExamMinutes < totalStudentMinutes)
    {
        if (totalStudentMinutes < 60)
        {

            return "Late \n" + to_string(totalStudentMinutes) + " minutes after the start";
        }
        else
        {
            timeDifference = totalStudentMinutes - totalExamMinutes;
            timeInHours = timeDifference / 60;
            timeInMinutes = timeDifference % 60;
            return "Late \n" + to_string(timeInHours) + ":" + to_string(timeInMinutes) + " hours after the start";
        }
    }
}
