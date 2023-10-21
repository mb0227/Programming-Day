#include<iostream>
#include<cmath>
using namespace std;

string projectTimeCalculation(double hours,double days,double numberOfWorkers){
    double timeWorkersWork,totalTime,remainingHours;
    string solved;
    timeWorkersWork=numberOfWorkers*10;
    totalTime=timeWorkersWork*days;
    totalTime=totalTime-totalTime/10;
    remainingHours=totalTime-hours;
    ceil(totalTime);
    if(remainingHours < hours) {
        int remainingHoursint=abs(remainingHours);
        solved="Not enough time! "+to_string(remainingHoursint)+" hours needed.";
        
    }
    if(remainingHours>hours) {
        int remainingHoursInt=abs(remainingHours);
        solved = "Yes!"+to_string(remainingHoursInt)+" hours left."; 
       
    }
     return solved;
}
main()
{ 
    double hours,days,numberOfWorkers;
    cout<<"Enter the needed hours: ";
    cin>>hours;
    cout<<"Enter the days that the firm has: ";
    cin>>days;
    cout<<"Enter the number of all workers: ";
    cin>>numberOfWorkers;
    string result;
    result=projectTimeCalculation(hours,days,numberOfWorkers);
    cout<<result;
}