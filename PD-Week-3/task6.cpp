#include <iostream>
using namespace std;

main(){
double cost,size,area,fertilizer_per_pound,fertilizer_per_square_feet;
cout<<"Enter the size of the fertilizer bag in pounds: ";
cin>> size;
cout<<"Enter the cost of the bag: $";
cin>>cost;
cout<<"Enter the area in square feet that can be covered by the bag: ";
cin>>area;
fertilizer_per_pound=cost/size;
cout<<"Cost of fertilizer per pound: $"<<fertilizer_per_pound<<endl;
fertilizer_per_square_feet=cost/area;
cout<<"Cost of fertilizing per square foot: $"<<fertilizer_per_square_feet;
}
