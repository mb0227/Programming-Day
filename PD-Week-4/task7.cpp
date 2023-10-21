#include <iostream>
using namespace std;

void flowerShop(float redRose, float whiteRose, float tulip){
   float orignalPrice,discount;
   orignalPrice=2*redRose+4.10*whiteRose+2.50*tulip;
   discount=orignalPrice-orignalPrice*0.2;
   if (orignalPrice>200){
    cout<<"Original Price: $"<<orignalPrice<<endl;
    cout<<"Price after Discount: $"<<discount<<endl;

   }
   if(orignalPrice<200){
          cout<<"Original Price: $"<<orignalPrice<<endl;
          cout<<"No Discount applied.";
   }

}

main(){
    float redRose, whiteRose, tulip;
cout<<"Red Rose: ";
cin>>redRose;
cout<<"White Rose: ";
cin>>whiteRose;
cout<<"Tulips: ";
cin>>tulip;
flowerShop(redRose, whiteRose, tulip);

}