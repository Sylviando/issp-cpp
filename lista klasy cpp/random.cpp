#include <iostream>
#include <cassert>
#include "random.h"
#include <cmath>
using namespace std;

const long long A = 16807;
const long long M = pow(2,31) - 1;


Random::Random(int f1)
{
	assert(f1 > 0 && f1 < M);
	_fn = f1;
}

double Random::operator()()
{
	long long fn1 = (A * _fn) % M;
	_fn = fn1;
	double result = _fn * 1.0 / (M - 1);

	return result;
}

int main()
{
    Random los;
	for (int i = 0; i < 20; i++)
	{
		cout << los() << endl;
	}
	return 0;
}
