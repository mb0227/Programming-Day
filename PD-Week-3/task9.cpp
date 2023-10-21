#include <iostream>
using namespace std;

main(){
int num,n1,n2,n3,n4,sum;
cout<<"Enter a 4-digit number: ";
cin>>num;
n1=num%10;
num=num/10;
n2=num%10;
num=num/10;
n3=num%10;
n4=num/10;
sum=n1+n2+n3+n4;
cout<<"Sum of the individual digits: "<<sum<<endl;
}