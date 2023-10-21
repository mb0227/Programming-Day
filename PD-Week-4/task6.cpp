#include<iostream>
using namespace std;

void longestTime(float hours, float minutes){
    float hoursToMinutes;
    hoursToMinutes=hours*60;
    if(hoursToMinutes>minutes){
        cout<<hours;
    }
    if (hoursToMinutes<minutes){
        cout<<minutes;
    }

}

main(){
float hours, minutes;
cout<<"Enter the number of hours: ";
cin>> hours;
cout<<"Enter the number of minutes: ";
cin>> minutes;
longestTime(hours,minutes);
}