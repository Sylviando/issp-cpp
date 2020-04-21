#include <iostream>

class Samochod
{
private:
    int _sruby;
    int _kola;

public:
    Samochod (int n)
    : _kola (n), _sruby (4*n) //zamiast blednego _sruby(4*_kola)
    {
        std::cout << "Samochod z " << _kola << " kolami i " << _sruby << " srubami.\n";
    }
};

int main()
{
    Samochod s4(4);
    Samochod s12(12);

    return 0;
}
