#include <iostream>
using namespace std;

main()
{
int age,move_times;
double avg;
cout<<"Enter the person's age: ";
cin>> age;
cout<<"Enter the number of times they've moved: ";
cin>>move_times;
avg=age/(move_times+1);
cout<<"Average number of years lived in the same house: "<<avg<<endl;
}
