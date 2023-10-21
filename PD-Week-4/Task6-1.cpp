#include <iostream>
#include <windows.h>
using namespace std;
void page();
void gotoxy(int x,int y);

int main(){
	int x = 25, y = 6;
	page();
	gotoxy(x,y);
	cout << "H";
	gotoxy(x,y+1);
	cout << "A";
	gotoxy(x,y+2);
	cout << "S";
	gotoxy(x,y+3);
	cout << "S";
	gotoxy(x,y+4);
	cout << "A";
	gotoxy(x,y+5);
	cout << "N";
	
	gotoxy(0,20);

}	

void move(int x, int y){
		gotoxy(x,y);
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
	cout << "|                                   |" << endl;
	cout << "|                                   |" << endl;
	cout << "|                                   |" << endl;
	cout << "|                                   |" << endl;
	cout << "|___________________________________|" << endl;
}
void gotoxy(int x,int y){
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
