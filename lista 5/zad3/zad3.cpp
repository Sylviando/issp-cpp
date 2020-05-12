#include <iostream>

#include "stos3.h"

using namespace std;

int main()

{
	Stos stos;

	stos.push(7);
	stos.push(6);
	stos.push(9);

	cout << stos;

	return 0;

}
