#include <iostream>
#include <vector>
using namespace std;

double func(double*, int)
{
    return 1.22474;
}

void funk(int *n)
{
    *n++;
}

int main()
{


    //wskaznik na tablice
    double (*a)[100];

    //dwuwymiarowa tablica wskaznikow na char
    char *tab2[5][5];

    //tablice (o nieokreslonej (x)) dluosci wskaznikow na char
    char *tab[];

    //standardowy vector wskaznikow void*
    std::vector<void*> wektor;

    //4-el tab vetorow
    std::vector<double> tab4[4];

    //wsk na funkcje
    double (*func)(double*,int);

    //funkcja przyjmujaca wskaznik przez referencje
    int *n;
    int funk(*n);

    return 0;
}
