#include <iostream>
using namespace std;

void pet(int holidays){
    int workingDays,gameTime,difference,differenceInMinutes,differenceInHours;
   

    workingDays=365-holidays;
    gameTime=workingDays*63+holidays*127;
    difference=30000-gameTime;
  


    if(gameTime<30000){
        differenceInHours=difference/60;
        differenceInMinutes=difference%60;
        cout<<"Tom sleeps well"<<endl;
        cout<<differenceInHours<<" hours and "<<differenceInMinutes<<" minutes less for play"<<endl;
    }
        
    if (gameTime>30000){
        differenceInHours=-difference/60;
        differenceInMinutes=-difference%60;
        cout<<"Tom will run away"<<endl;
        cout<< differenceInHours<<" hours and " <<differenceInMinutes<<" minutes for play"<<endl;
    }
}

main(){
    int holidays;
    cout<<"Holidays: ";
    cin>>holidays;
    pet(holidays);

}