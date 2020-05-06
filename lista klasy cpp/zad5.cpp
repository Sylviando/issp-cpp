#include <iostream>
#include <cassert>
#include "random.h"
#include <cmath>


using namespace std;

int main()
{
    Random los;
    int tab[10] = { 0 };
    for (int i = 0; i<50; i++)
    {
        double los_n = los();
        if (los_n < 0.1)
            tab[0] ++;
        if ((los_n >= 0.1) && (los_n < 0.2))
            tab[1] ++;
        if ((los_n >= 0.2) && (los_n < 0.3))
            tab[2] ++;
        if ((los_n >= 0.3) && (los_n < 0.4))
            tab[3] ++;
        if ((los_n >= 0.4) && (los_n < 0.5))
            tab[4] ++;
        if ((los_n >= 0.5) && (los_n < 0.6))
            tab[5] ++;
        if ((los_n >= 0.6) && (los_n < 0.7))
            tab[6] ++;
        if ((los_n >= 0.7) && (los_n < 0.8))
            tab[7] ++;
        if ((los_n >= 0.8) && (los_n < 0.9))
            tab[8] ++;
        if ((los_n >= 0.9) && (los_n < 1.0))
            tab[9] ++;
    }


    cout << "0 - 0.1: ";
    while (tab[0])
    {
        cout << "*";
        tab[0]--;
    }
    cout << endl;

    cout << "0.1 - 0.2: ";
    while (tab[1])
    {
        cout << "*";
        tab[1]--;
    }
    cout << endl;

    cout << "0.2 - 0.3: ";
    while (tab[2])
    {
        cout << "*";
        tab[2]--;
    }
    cout << endl;

    cout << "0.3 - 0.4: ";
    while (tab[3])
    {
        cout << "*";
        tab[3]--;
    }
    cout << endl;

    cout << "0.4 - 0.5: ";
    while (tab[4])
    {
        cout << "*";
        tab[4]--;
    }
    cout << endl;

    cout << "0.5 - 0.6: ";
    while (tab[5])
    {
        cout << "*";
        tab[5]--;
    }
    cout << endl;

    cout << "0.6 - 0.7: ";
    while (tab[6])
    {
        cout << "*";
        tab[6]--;
    }
    cout << endl;

    cout << "0.7 - 0.8: ";
    while (tab[7])
    {
        cout << "*";
        tab[7]--;
    }
    cout << endl;

    cout << "0.8 - 0.9: ";
    while (tab[8])
    {
        cout << "*";
        tab[8]--;
    }
    cout << endl;

    cout << "0.9 - 1.0: ";
    while (tab[9])
    {
        cout << "*";
        tab[9]--;
    }
    cout << endl;
}
