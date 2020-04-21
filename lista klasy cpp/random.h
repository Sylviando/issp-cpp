#include <ctime>
class Random
{
    int _fn;
public:
    Random( int f1 = time(0) );
    double operator()();
};
