#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x,int y);
void page();

int main(){
	page();
	gotoxy(13,5);
	cout << "BILAL";
	gotoxy(20,20);
}

void gotoxy(int x,int y){
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void page(){
	cout << "_____________________________________" << endl;
	cout << "|                                   |" << endl;
	cout << "|                                   |" << endl;
	cout << "|                                   |" << endl;
	cout << "|                                   |" << endl;
	cout << "|                                   |" << endl;
	cout << "|                                   |" << endl;
	cout << "|                                   |" << endl;
	cout << "|                                   |" << endl;
	cout << "|___________________________________|" << endl;
}
