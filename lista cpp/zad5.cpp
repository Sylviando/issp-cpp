#include <iostream>
#include <vector>
#include <cmath>
#include <cstdio>
#include <ctime>
#include <math.h>
using namespace std;

//podpunkt a
int fibo1(int n)
{
    if (n == 0)
        return n;
    if (n <= 2)
        return 1;
    else
        return fibo1(n-1) + fibo1(n-2);
}

//podpunkt b
int fibo2(int n)
{
    return round(1 / sqrt(5) * ( pow( ( 2 / (sqrt(5) - 1) ), n) - pow( ( 2 / (sqrt(5) + 1) ), n) ));
}

//podpunkt c
int fibo3(int n) //poprawiona wersja
{
    static std::vector<unsigned long> values;
    if (values.size() == 0)
    {
        values.push_back(0);
        values.push_back(1);
        values.push_back(1);
    }
    if (n < values.size())
        return values [n];
    for (int j = values.size(); j <= n; j++)
    {
        values.push_back( values[j-1] + values[j-2] );
    }
    return values[n];
}


int main()
{
    clock_t start1 = clock();
    cout << "Wyniki fibo1: " << endl;
    for (int i = 1; i<=28; i++)
    {
        cout << i << ") " << fibo1(i) << endl;
    }
    cout << "Czas trwania: " << clock() - start1 << endl;

    clock_t start2 = clock();
    cout << "Wyniki fibo2: " << endl;
    for (int i = 1; i<=48; i++)
    {
        cout << i << ") " << fibo2(i) << endl;
    }
    cout << "Czas trwania: " << clock() - start2 << endl;

    clock_t start3 = clock();
    cout << "Wyniki fibo3: " << endl;
    for (int i = 1; i<=48; i++)
    {
        cout << i << ") " << fibo3(i) << endl;
    }
    cout << "Czas trwania: " << clock() - start3 << endl;

    return 0;
}
//funkcje fibo1, fibo2 i fibo3 daj¹ ró¿ne wyniki - jest to spowodowane rzutowaniem na int wartosci po przecinku w funkcji fibo2 (wartosci zaokraglane sa w dol)
//czas wykonywania jest rozny - najdluzej zajmuje funkcji fibo1, ktora wykonuje sie rekurencyjnie. Najkrocej - fibo2.
