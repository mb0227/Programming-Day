#include <iostream>
using namespace std;

main(){
double mins,secs,frames;
cout<<"Number of Minutes: " ;
cin>>mins;
cout<<"Frames per Second: " ;
cin>>secs;
frames=mins*60*secs;
cout<<"Total Number of Frames: "<<frames<<endl;
}