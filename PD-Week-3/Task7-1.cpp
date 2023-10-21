#include <iostream>
#include <windows.h>
using namespace std;

void movePlayer(int x, int y);
void gotoxy(int x,int y);
void printMaze();

int main(){
	int x = 5, y = 4;
	printMaze();
	while(true){
			movePlayer(x,y);
			y = y + 1;
	}
    
	
	gotoxy(20,20);
	
}

void printMaze(){
	
	cout << "###########################"  << endl ;
	cout << "#                         #"  << endl ;
	cout << "#                         #"  << endl ;
	cout << "#                         #"  << endl ;
	cout << "#                         #"  << endl ;
	cout << "#                         #"  << endl ;
	cout << "#                         #"  << endl ;
	cout << "#                         #"  << endl ;
	cout << "#                         #"  << endl ;
	cout << "#                         #"  << endl ;
	cout << "#                         #"  << endl ;
	cout << "###########################"  << endl ;
}
void movePlayer(int x, int y){
	gotoxy(x,y);
	cout << "P";
	Sleep(200);
	gotoxy(x,y);
	cout << " ";
}
void gotoxy(int x,int y){
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
