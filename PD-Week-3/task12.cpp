#include <iostream>
using namespace std;

main(){
int square_metres,width,height,no_of_walls;
cout<<"Number of square meters you can paint: ";
cin>>square_metres;
cout<<"Width of the single wall (in meters): ";
cin>>width;
cout<<"Height of the single wall (in meters): ";
cin>>height;

no_of_walls=square_metres/(height*width);

cout<<"Number of walls you can paint: "<<no_of_walls<<endl;

}