#include <iostream>
#include <windows.h>
using namespace std;

void printMenu();


int main(){
	printMenu();
	
cout << "Enter the student's name: ";
string nameStd1;
cin >> nameStd1;

cout << "Enter matriculation marks (out of 1100): ";
float matric1;
cin >> matric1;

cout << "Enter intermediate marks (out of 550): ";
float inter1;
cin >> inter1;

cout << "Enter Ecat marks (out of 400): ";
float ecatMarksStd1;
cin >> ecatMarksStd1;

float agg1;
agg1 = ((matric1/11)*0.3) + ((inter1/5.5)*0.3) + ((ecatMarksStd1/4)*0.4);

cout << "Aggregate score for " << nameStd1 << " in UET is: " << agg1 << "%" << endl << endl; 


cout << "Enter the student's name: ";
string nameStd2;
cin >> nameStd2;

cout << "Enter matriculation marks (out of 1100): ";
float matric2;
cin >> matric2;

cout << "Enter intermediate marks (out of 550): ";
float inter2;
cin >> inter2;

cout << "Enter Ecat marks (out of 400): ";
float ecatMarksStd2;
cin >> ecatMarksStd2;

float agg2;
agg2 = ((matric2/11)*0.3) + ((inter2/5.5)*0.3) + ((ecatMarksStd2/4)*0.4);

cout << "Aggregate score for " << nameStd2 << " in UET is: " << agg2 << "%" << endl << endl; 

	if(ecatMarksStd1 > ecatMarksStd2){
		cout << nameStd1 << " will get the First Roll Number";
	}
	else{
	cout << nameStd2 << " will get the First Roll Number";
	}
	
}


void printMenu(){
	
cout<<" # # ### ### #   # ### ##   ## ### ### # #       #  ##  # # ###  ##  ## ###  #   #### " << endl;   
cout<<" # # # #  #  #   # #   # # #    #   #  # #      # # # # ###  #  #   #    #  # #  #  # " << endl;
cout<<" # # # #  #  #   # ##  ##   #   #   #   #       ### # # ###  #   #   #   #  # #  #  # " << endl;
cout<<" # # # #  #   # #  #   # #   #  #   #   #       # # # # # #  #    #   #  #  # #  #  # " << endl;
cout<<" ### # # ###   #   ### # # ##  ###  #   #       # # ##  # # ### ##  ##  ###  #   #  # " << endl;
cout<<"                                                                                      " << endl;
cout<<" # #  #  ###  #   ## ### # # ### ### ###         ## # #  ## ### ### # #               " << endl;
cout<<" ### # # # # # # #   #   ### #   # #  #         #   # # #    #  #   ###               " << endl;
cout<<" ### ### # # ### # # ##  ### ##  # #  #          #   #   #   #  ##  ###               " << endl; 
cout<<" # # # # # # # # # # #   # # #   # #  #           #  #    #  #  #   # #               " << endl; 
cout<<" # # # # # # # #  ## ### # # ### # #  #         ##   #  ##   #  ### # #               " << endl;
cout<<endl<<endl<<endl;
}


