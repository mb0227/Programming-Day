#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

const int mazeRows = 28;
const int mazeColumns = 101;

char maze[mazeRows][mazeColumns] = {
    "####################################################################################################",
    "# P                                                                                                #",
    "#                                                                                         E        #",
    "#                                                                                                  #",
    "#                                                                                                  #",
    "#                                                                                                  #",
    "#                                                                                                  #",
    "#                                                                                                  #",
    "#                                                                                                  #",
    "#                                                                                                  #",
    "#                                                                                                  #",
    "#                                                                                                  #",
    "#                                                                                                  #",
    "#                                                                                                  #",
    "#                                                                                                  #",
    "#                                                                                                  #",
    "#                                                                                                  #",
    "#                                                                                                  #",
    "#                                                                                                  #",
    "#                                                                                                  #",
    "#                                                                                                  #",
    "#                                                                                                  #",
    "#                                                                                                  #",
    "#                                                                                                  #",
    "#                                                                                                  #",
    "#                                                                                                  #",
    "#                                                                                                  #",
    "###################################################################################################"};

int playerRow, playerCol;
int enemyRow = 2, enemyCol = 90;
int enemyRowDirection = 1;

void displayMaze();
void movePlayer(char direction);
void shootDash();
void moveEnemy();
void moveBullet();

void hideCursor()
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(consoleHandle, &info);
}

void displayMaze()
{
    system("cls");
    for (int i = 0; i < mazeRows; ++i)
    {
        for (int j = 0; j < mazeColumns; ++j)
        {
            cout << maze[i][j];
        }
        cout << endl;
    }
}

void movePlayer(char direction)
{
    int newRow = playerRow;
    int newCol = playerCol;

    switch (direction)
    {
    case 'w':
        newRow--;
        break;
    case 's':
        newRow++;
        break;
    case 'a':
        newCol--;
        break;
    case 'd':
        newCol++;
        break;
    default:
        break;
    }

    if (newRow >= 0 && newRow < mazeRows && newCol >= 0 && newCol < mazeColumns && maze[newRow][newCol] != '#')
    {
        maze[playerRow][playerCol] = ' ';
        playerRow = newRow;
        playerCol = newCol;
        maze[playerRow][playerCol] = 'P';
    }
}

void shootDash()
{
    int newCol = playerCol + 1;
    while (newCol < mazeColumns && maze[playerRow][newCol] == ' ')
    {
        maze[playerRow][newCol] = '-';
        displayMaze();
        Sleep(300);
        maze[playerRow][newCol] = ' ';
        ++newCol;
        if (_kbhit())
        {
            moveEnemy();
            char key = _getch();
            movePlayer(key);
            moveEnemy();
        }
    }
}


void moveBullet()
{
    for (int col = playerCol + 1; col < mazeColumns; ++col)
    {
        if (maze[playerRow][col] == ' ')
        {
            maze[playerRow][col] = '-';
            displayMaze();
            Sleep(50);
            maze[playerRow][col] = ' ';
        }
        else
        {
            break;
        }
    }
}

void moveEnemy()
{
    maze[enemyRow][enemyCol] = ' ';

    if (enemyRow == mazeRows - 2 || enemyRow == 1)
    {
        enemyRowDirection *= -1;
    }
    enemyRow += enemyRowDirection;

    maze[enemyRow][enemyCol] = 'E';
}

int main()
{
    hideCursor();
    displayMaze();
    for (int i = 0; i < mazeRows; ++i)
    {
        for (int j = 0; j < mazeColumns; ++j)
        {
            if (maze[i][j] == 'P')
            {
                playerRow = i;
                playerCol = j;
                break;
            }
        }
    }

    while (true)
    {
        if (_kbhit())
        {
            char key = _getch();
            switch (key)
            {
            case 'w':
            case 's':
            case 'a':
            case 'd':
                movePlayer(key);
                break;
            case ' ':
                shootDash();
                moveBullet();
                break;
            default:
                break;
            }
        }
        moveEnemy();
        displayMaze();
        Sleep(50);
    }
}
