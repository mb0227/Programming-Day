#include<iostream>
using namespace std;

void discount(string countryName, float ticketPrice){
float pakistanDiscount,irelandDiscount,indiaDiscount, englandDiscount,canadaDiscount;
pakistanDiscount= ticketPrice-ticketPrice*0.05;
irelandDiscount= ticketPrice-ticketPrice*0.1;
indiaDiscount= ticketPrice-ticketPrice*0.2;
englandDiscount=ticketPrice-ticketPrice*0.3;
canadaDiscount= ticketPrice-ticketPrice*0.45;

if(countryName=="Pakistan"){
cout<<"Final ticket price after discount: $"<<pakistanDiscount;
}


if(countryName=="Ireland"){
cout<<"Final ticket price after discount: $"<<irelandDiscount;
}


if(countryName=="India"){
cout<<"Final ticket price after discount: $"<<indiaDiscount;
}

if(countryName=="England"){
cout<<"Final ticket price after discount: $"<<englandDiscount;
}


if(countryName=="Canada"){
cout<<"Final ticket price after discount: $"<<canadaDiscount;
}
}

main(){
string countryName;
float ticketPrice;
cout<<"Enter the country's name: ";
cin>> countryName;
cout<<"Enter the ticket price in dollars: $";
cin>> ticketPrice;
discount(countryName, ticketPrice);
}