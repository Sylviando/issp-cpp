#include <iostream>
#include <vector>

void zeruj(std::vector<double> &lista)
{
    for (int i = 0; i < lista.size(); i++)
        {
            lista[i] = 0;
        }
}

using namespace std;

int main()
{
    std::vector< double > lista;
    lista.push_back(17);
    lista.push_back(2);
    lista.push_back(8);
    lista.push_back(-2);

    for (int i = 0; i < lista.size(); i++)
    {
        cout << lista[i] << " ";
    }
    cout << endl;

    zeruj(lista);

    for (int i = 0; i < lista.size(); i++)
    {
        cout << lista[i] << " ";
    }
    cout << endl;

    return 0;
}
