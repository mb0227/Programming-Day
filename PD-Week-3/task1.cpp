#include <iostream>
using namespace std;

main(){
double num_of_sides,sum;
cout<<"Enter the number of sides of the polygon: ";
cin>> num_of_sides;
sum=(num_of_sides-2)*180;
cout<<"The sum of internal angles of a " <<num_of_sides<< "-sided polygon is: "<<sum<<" degrees"<<endl;
}
