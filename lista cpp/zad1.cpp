#include <iostream>
#include <vector>
#include <climits>

int war_min(const std::vector<int> &lista)
{
    if (lista.size() == 0)
        return INT_MIN;
    else
    {
        int war = lista[0];
        for (int i = 1; i < lista.size(); i++)
        {
            if (lista[i] < war) war = lista[i];
        }
        return war;
    }
}

using namespace std;

int main()
{
    std::vector< int > lista;

    cout << war_min(lista);
    cout << endl;

    lista.push_back(17);
    lista.push_back(2);
    lista.push_back(8);
    lista.push_back(-2);

    cout << war_min(lista);



    return 0;
}
