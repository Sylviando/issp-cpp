#include <iostream>
#include "zespolone.h"

using namespace std;

int main()
{
    Zespolone x(1,2);
    Zespolone y(4,5);
    Zespolone z(2,1);
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "x + y: "<< x+y << endl;
    cout << "x - y: "<< x-y << endl;
    cout << "x * y: "<< x*y << endl;
    cout << "x / y: "<< x/y << endl;
    x+=z;
    cout << "x + (2 + 1i): " << x << endl;
    y/=z;
    cout << "y /(2 + 1i): " << y << endl;

    cout << "Podaj czesc rzeczywista i urojona liczby." << endl;
    Zespolone podana;
    cin >> podana;
    cout << "Podana liczba zespolona: " << podana;

  return 0;
}
