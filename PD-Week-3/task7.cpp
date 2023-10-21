#include <iostream>
using namespace std;
main()
{
        string movieName;
        int adultTicketPrice ;  
	int childTicketPrice ;
	int adultTicketsSold ; 
	int childTicketsSold ;
	int amount;
	int donation ;    
	int charity; 
	int remainingAmount;

cout<<"Enter the movie name: ";
cin>>movieName;
cout<<"Enter the adult ticket price: $";
cin>>adultTicketPrice;
cout<<"Enter the child ticket price: $";
cin>>childTicketPrice;
cout<<"Enter the number of adult tickets sold: ";
cin>>adultTicketsSold;
cout<<"Enter the number of child tickets sold: ";
cin>>childTicketsSold;
cout<<"Enter the percentage of the amount to be donated to charity: ";
cin>>donation;

cout<<endl;

amount= (adultTicketPrice*adultTicketsSold)+(childTicketPrice*childTicketsSold);
charity= amount*donation/100;
remainingAmount= amount-charity;

cout<<"Movie: "<<movieName<<endl;
cout<<"Total amount generated from ticket sales: $"<<amount<<endl;
cout<<"Donation to charity (" <<donation<< "%): $"<<charity<<endl;
cout<<"Remaining amount after donation: $"<<remainingAmount;
}

