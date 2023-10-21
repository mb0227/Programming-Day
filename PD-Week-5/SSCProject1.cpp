#include <iostream>
using namespace std;

/* Here I will use the function prototypes which I have used below. */

void header();
int printMenu();

main()
{
    header();


}

/* Here I will display the header of the file.*/

void header()
{
    cout << endl
         << endl;
    cout << "               ######       ######       ######## " << endl;
    cout << "              ##    ##     ##    ##      #        " << endl;
    cout << "              ##           ##            #        " << endl;
    cout << "               ######       ######       #        " << endl;
    cout << "                    ##           ##      #        " << endl;
    cout << "              ##    ##     ##    ##      #        " << endl;
    cout << "               ######       ######       ######## " << endl;
    cout << "             Student       Service         Centre  " << endl;
    cout << endl << endl<< endl;
    cout << "            Welcome to SSC(Student Service Center) " << endl;
}

int printMenu()
{
    int option,foodOrder,bookTable,getInfo,getInContact;
    cout<<"1). Do you want to order food?"<<endl;
    cout<<"2). Do you want to book table?"<<endl;
    cout<<"3). Do you want to get some information?"<<endl;
    cout<<"4). Need help? Contact here."<<endl;
    cout<<"5). Exit"<<endl;
    cout<<"Enter any option to continue: ";
    cin>>option;
    return option;
}

/* */