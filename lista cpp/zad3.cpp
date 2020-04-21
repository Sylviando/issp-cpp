#include <iostream>
#include <vector>

double operator* (std::vector<double>const& v, std::vector<double> const& w)
{
    double wynik=0;
    for (unsigned i = 0; i < v.size() && i < w.size(); i++)
        wynik += (v[i] * w[i]);
    return wynik;
}

using namespace std;

int main()
{
    std::vector<double> lista1;
    std::vector<double> lista2;

    lista1.push_back(8);
    lista1.push_back(13);
    lista1.push_back(1);

    lista2.push_back(2);
    lista2.push_back(1);
    lista2.push_back(2);

    cout << lista1 * lista2;

    return 0;
}
