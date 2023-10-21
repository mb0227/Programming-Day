#include <iostream>
using namespace std;

main(){
string name;
double weight_loss,loss;
cout<<"Enter the Name of the Person: ";
cin>>name;
cout<<"Enter the target weight loss in kilograms: ";
cin>>weight_loss;
loss=weight_loss*15;
cout<<name<<" will need "<<loss<<" days to lose "<<weight_loss<<" kg of weight by following the doctor's suggestions"<<endl; 
}