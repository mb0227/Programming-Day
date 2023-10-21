#include <iostream>
using namespace std;

void calculateTax(char vehicleCode, int price){
    double tax,finalPrice;
    if(vehicleCode=='M'){
        tax=(price*6)/100;
        finalPrice=price+tax;
        cout<<"The final price of a vehicle of type "<<vehicleCode<<" after adding the tax is $"<<finalPrice<<endl;
    }
    if(vehicleCode=='E'){
        tax=(price*8)/100;
        finalPrice=price+tax;
        cout<<"The final price of a vehicle of type "<<vehicleCode<<" after adding the tax is $"<<finalPrice<<endl;
    }

    if(vehicleCode=='S'){
        tax=(price*10)/100;
        finalPrice=price+tax;
        cout<<"The final price of a vehicle of type "<<vehicleCode<<" after adding the tax is $"<<finalPrice<<endl;

    }

    if(vehicleCode=='V'){
        tax=(price*12)/100;
        finalPrice=price+tax;
        cout<<"The final price of a vehicle of type "<<vehicleCode<<" after adding the tax is $"<<finalPrice<<endl;
    }

    if(vehicleCode=='T'){
        tax=(price*15)/100;
        finalPrice=price+tax;
        cout<<"The final price of a vehicle of type "<<vehicleCode<<" after adding the tax is $."<<finalPrice<<endl;
    }



}
main(){
    int price;
    char vehicleCode;
    cout<<"Enter the vehicle type code (M, E, S, V, T): ";
    cin>>vehicleCode;
    cout<<"Enter the price of vehicle: $";
    cin>>price;
    calculateTax(vehicleCode, price);

}