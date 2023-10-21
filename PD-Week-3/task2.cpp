#include<iostream>
using namespace std;

void Reverse(string booleans){
if(booleans=="true"){
cout<<"false";
}
if(booleans=="false"){
cout<<"true";
}

}

main(){
string booleans;
cout<<"Enter 'true' or 'false': ";
cin>> booleans;
Reverse(booleans);
}