#include <iostream>

#include "stos4.h"

using namespace std;

int main()

{
	Stos stos;

	stos.push(7);
	stos.push(6);
	stos.push(9);

	cout << stos << " stos" <<endl;

	stos.reverse();

	cout << stos << " stos po u¿yciu metody reverse";

	return 0;

}
