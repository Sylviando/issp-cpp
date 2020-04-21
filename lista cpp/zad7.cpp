#include <iostream>
#include <stdlib.h>
using namespace std;

int nwd(int x,int y)
{
    if (x == 0 or y == 0) // wystarczy, że jeden arugemnt będzie równy 0, nie oba.
        return -1;
    x = abs(x);
    y = abs(y);
    while (x != y)
    {
        if (x> y)
            x -=y;
        else
            y -=x;
    }
    return x;
}

int main()
{
    cout << nwd(999, 12);
    return 0;
}
