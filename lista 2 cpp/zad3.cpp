#include <iostream>
#include <chrono>

using namespace std;

int main()
{
    unsigned N = 5000000;

    auto start = chrono::high_resolution_clock::now();
    for(unsigned n = 1; n <= N; ++n)
    {
        auto pstart = chrono::high_resolution_clock::now();
        int *p = new int[n];
        delete [] p;
        auto pstop = chrono::high_resolution_clock::now();
        auto pczas = chrono::duration_cast<chrono::microseconds>(pstop - pstart).count();
        if (n==1) cout << "Czas wykonania pary instr. wewnatrz petli: " << pczas << endl;
    }


    auto stop = chrono::high_resolution_clock::now();
    auto czas = chrono::duration_cast<chrono::microseconds>(stop - start).count();

    cout << "Czas calkowity: " << czas << endl;


    int spr=0;
    auto dstart = chrono::high_resolution_clock::now();
    for(unsigned n = 1; n <= N; ++n)
    {
        spr=spr+10;
    }
    auto dstop = chrono::high_resolution_clock::now();
    auto dczas = chrono::duration_cast<chrono::microseconds>(dstop - dstart).count();
    cout << "Czas wykonania dodawania: " << dczas << endl;
    cout << "Roznica: " << czas-dczas << endl;


    return 0;
}
