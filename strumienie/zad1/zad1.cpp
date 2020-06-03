#include <iostream>
#include <sstream>
#include <typeinfo>

using namespace std;

int konwersja(char *dana) {
    int wynik;
    stringstream str(dana);
    str >> wynik;
    return wynik;
}

int main()
{
    char znak[] = "10";
    cout << "Wynik dzialania funkcji konwersji: " << konwersja(znak) << "\n";

    return 0;
}
