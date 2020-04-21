#include <iostream>

int main()
{

    double tab[10];
    double x;

    std::cout << &x << "\t" << &tab[-1] << "\n";

    return 0;
}
//otrzymujemy adres zmiennej x oraz sztuczny adres komórki tab[-1] (na moim komputerze sa takie same)
//nalezy uwazac na poprawne indeksowanie,aby nie nadpisac danych w pamieci.
