#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;

void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
void headerOpeningScreen();
void openingScreen();
int newGame();
void pageBoundary();
void displayTank();
void eraseTank();
void displayEnemy1();
void eraseEnemy1();
void moveEnemy1();
void displayEnemy2();
void eraseEnemy2();
void moveEnemy2();
void displayEnemy3();
void eraseEnemy3();
void moveEnemy3();
void moveTankUp();
void moveTankDown();

int tX = 1;
int tY = 12;
int eX1 = 87;
int eY1 = 3;
int eX2 = 97;
int eY2 = 25;
int eX3 = 107;
int eY3 = 30;
int main()
{
    system("cls");
    headerOpeningScreen();
    openingScreen();
    newGame();
    pageBoundary();
    displayTank();
    displayEnemy1();
    displayEnemy2();
    displayEnemy3();
    while (true)
    {
        if (GetAsyncKeyState(VK_UP))
        {
            moveTankUp();
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            moveTankDown();
        }
        moveEnemy1();
        moveEnemy2();
        moveEnemy3();
        Sleep(200);
    }
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
                                                                                            : ' ';
}

void headerOpeningScreen()
{
    cout << "         ########     #       ##    ##    ##   ##      #### # ####      #      ##    ##   ######      #" << endl;
    cout << "            ##       # #      ###   ##    ##  ##       ##  ###  ##     # #     ###   ##     ##       # #" << endl;
    cout << "            ##      #####     ## ## ##    ## #         ##   #   ##    #####    ## ## ##     ##      #####" << endl;
    cout << "            ##     #     #    ##   ###    ##  ##       ##       ##   #     #   ##   ###     ##     #     #" << endl;
    cout << "            ##    #       #   ##    ##    ##    ##     ##       ##  #       #  ##    ##   ######  #       # " << endl;
}

void openingScreen()
{
    cout << endl
         << endl
         << endl
         << endl
         << "                                        WELCOME TO TANK MANIA!" << endl
         << endl
         << endl;
}

int newGame()
{
    int option;
    cout << "New Game" << endl
         << endl;
    cout << endl
         << "Exit" << endl
         << endl
         << endl;
    cout << "Enter 1 to continue(Any other key to Exit): ";
    cin >> option;
    if (option == 1)
    {
        system("cls");
    }
    else
    {
        exit(0);
    }
    return 0;
}

void pageBoundary()
{
    cout << endl
         << endl;
    cout << " _________________________________________________________________________________________________________________" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|                                                                                                                 |" << endl;
    cout << "|_________________________________________________________________________________________________________________|" << endl;
}

void displayTank()
{
    gotoxy(tX, tY);
    cout << "     ----          ";
    gotoxy(tX, tY + 1);
    cout << "  -||||||||======= ";
    gotoxy(tX, tY + 2);
    cout << " [||||||||||||]    ";
    gotoxy(tX, tY + 3);
    cout << "  \\OOOOOOOOO/     ";
    gotoxy(tX, tY + 4);
}

void eraseTank()
{
    gotoxy(tX, tY);
    cout << "                  ";
    gotoxy(tX, tY + 1);
    cout << "                  ";
    gotoxy(tX, tY + 2);
    cout << "                  ";
    gotoxy(tX, tY + 3);
    cout << "                  ";
    gotoxy(tX, tY + 4);
}

void displayEnemy1()
{
    gotoxy(eX1, eY1);
    cout << "   O   " << endl;
    gotoxy(eX1, eY1 + 1);
    cout << "  /|\\" << endl;
    gotoxy(eX1, eY1 + 2);
    cout << "  / \\" << endl;
}

void eraseEnemy1()
{
    gotoxy(eX1, eY1);
    cout << "       " << endl;
    gotoxy(eX1, eY1 + 1);
    cout << "      " << endl;
    gotoxy(eX1, eY1 + 2);
    cout << "      " << endl;
}

void moveEnemy1()
{
    eraseEnemy1();
    eY1 = eY1 + 1;
    if (eY1 == 36)
    {
        eY1 = 4;
    }
    displayEnemy1();
}
void displayEnemy2()
{
    gotoxy(eX2, eY2);
    cout << "   O   " << endl;
    gotoxy(eX2, eY2 + 1);
    cout << "  /|\\" << endl;
    gotoxy(eX2, eY2 + 2);
    cout << "  / \\" << endl;
}

void eraseEnemy2()
{
    gotoxy(eX2, eY2);
    cout << "      " << endl;
    gotoxy(eX2, eY2 + 1);
    cout << "      " << endl;
    gotoxy(eX2, eY2 + 2);
    cout << "      " << endl;
}

void moveEnemy2()
{
    eraseEnemy2();
    eX2 = eX2 - 2;
    eY2 = eY2 - 1;
    if (eY2 == 8)
    {
        eX2 = 97;
        eY2 = 25;
    }
    displayEnemy2();
}

void displayEnemy3()
{
    gotoxy(eX3, eY3);
    cout << "   O   " << endl;
    gotoxy(eX3, eY3 + 1);
    cout << "  /|\\" << endl;
    gotoxy(eX3, eY3 + 2);
    cout << "  / \\" << endl;
}

void eraseEnemy3()
{
    gotoxy(eX3, eY3);
    cout << "      " << endl;
    gotoxy(eX3, eY3 + 1);
    cout << "      " << endl;
    gotoxy(eX3, eY3 + 2);
    cout << "      " << endl;
}
void moveEnemy3()
{
    eraseEnemy3();
    eY3 = eY3 - 1;
    if (eY3 == 3)
    {
        eY3 = 30;
    }
    displayEnemy3();
}
void moveTankUp()
{
    
        eraseTank();
        tY = tY - 1;
        displayTank();
    
}

void moveTankDown()
{
   

        eraseTank();
        tY = tY + 1;
        displayTank();
  
}