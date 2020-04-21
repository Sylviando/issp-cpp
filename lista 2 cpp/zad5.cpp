#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char haslo[8];
    strcpy(haslo, "Ta,jnE!");
    for ( ; ; )
    {
        cout << "Podaj haslo: ";
        char tmp[8];
        cin >> tmp;
        if (strcmp(tmp, haslo) == 0)
            break;
        cout << "Przykro mi, haslo jest niepoprawne!" << endl;
    }
    cout << "Witaj w systemie!";

    return 0;
}
//Dzia³anie programu zale¿y od kompilatora - w ró¿nych kompilatorach kolejnoœæ zapisywania zmiennych mo¿e siê ró¿nic,
//co prowadzi do odmiennych wyników dzia³ania programu.
//W tym przypadku nastêpuje przepe³nienie stosu i nadpisanie has³a
//to jest po wpisaniu 123456781234567 ostatnie 7 cyfr nadpisuje oryginalne has³o, przez co za drugim razem mo¿emy zalogowaæ siê poprzez wpisanie 1234567
