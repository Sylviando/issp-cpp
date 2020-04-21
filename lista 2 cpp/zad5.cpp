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
//Dzia�anie programu zale�y od kompilatora - w r�nych kompilatorach kolejno�� zapisywania zmiennych mo�e si� r�nic,
//co prowadzi do odmiennych wynik�w dzia�ania programu.
//W tym przypadku nast�puje przepe�nienie stosu i nadpisanie has�a
//to jest po wpisaniu 123456781234567 ostatnie 7 cyfr nadpisuje oryginalne has�o, przez co za drugim razem mo�emy zalogowa� si� poprzez wpisanie 1234567
