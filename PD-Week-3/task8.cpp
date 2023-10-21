#include <iostream>
using namespace std;

main(){
double veg_price, fruit_price, kg_veg, kg_fruits, earnings;
cout<<"Enter vegetable price per kilogram (in coins): ";
cin>> veg_price;
cout<<"Enter fruit price per kilogram (in coins): ";
cin>> fruit_price;
cout<<"Enter total kilograms of vegetables: ";
cin>> kg_veg;
cout<<"Enter total kilograms of fruits: ";
cin>>kg_fruits;
earnings=(veg_price*kg_veg+fruit_price*kg_fruits)/1.94;
cout<<"Total earnings in Rupees (Rps): "<<earnings<<endl;
}
