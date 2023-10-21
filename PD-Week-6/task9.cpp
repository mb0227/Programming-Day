#include <iostream>
using namespace std;

string checkPointPosition(int h, int x, int y);

main()
{
    int h, x, y;
    cout << "Enter height: ";
    cin >> h;
    cout << "Enter x coordrinate: ";
    cin >> x;
    cout << "Enter y coordrinate: ";
    cin >> y;
    cout << checkPointPosition(h, x, y);
}

string checkPointPosition(int h, int x, int y)
{
    if ((x < 3 * h) && (y < h))
    {
        return "Inside";
    }
    else if (((x >h)&&(x < 2 * h)) && ((y < 4 * h)))
    {
        return "Inside";
    }
    else if ((x == 0) && (y == 0))
    {
        return "Border";
    }
    else if ((x == 0) && (y == h))
    {
        return "Border";
    }
    else if ((x == h) && (y == h))
    {
        return "Border";
    }
    else if ((x == 2 * h) && (y == h))
    {
        return "Border";
    }
    else if ((x == 3 * h) && (y == h))
    {
        return "Border";
    }
    else if ((x == 3 * h) && (y == 0))
    {
        return "Border";
    }
    else if ((x == 2 * h) && (y == 0))
    {
        return "Border";
    }
    else if ((x == h) && (y == 0))
    {
        return "Border";
    }
    else if ((x == h) && (y == 2 * h))
    {
        return "Border";
    }
    else if ((x == h) && (y == 3 * h))
    {
        return "Border";
    }
    else if ((x == h) && (y == 4 * h))
    {
        return "Border";
    }
    else if ((x == 2 * h) && (y == 2 * h))
    {
        return "Border";
    }
    else if ((x == 2 * h) && (y == 3 * h))
    {
        return "Border";
    }
    else if ((x == 2 * h) && (y == 4 * h))
    {
        return "Border";
    }

    else if (((x > 0) || (x < h)) && (y > h))
    {
        return "Outside";
    }
    else if ((x > h) || (x < 2 * h) && (y > 4 * h))
    {
        return "Outside";
    }

    else if (((x > 2 * h) || (x < 3 * h) && (y > h)))
    {
        return "Outside";
    }
    else if ((x < 0) && ((y > 0) || (y < 0)))
    {
        return "Outside";
    }
    else if (((x < 0) || (x > 0)) && (y < 0))
    {
        return "Outside";
    }
    else if ((x > 3 * h) && (y == 0))
    {
        return "Outside";
    }
}