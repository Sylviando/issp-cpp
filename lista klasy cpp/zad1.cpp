#include <iostream>
#include "wektor.h"

using namespace std;

int main()
{
    Wektor v(7);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    return 0;
}
