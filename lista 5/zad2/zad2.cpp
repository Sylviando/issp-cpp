#include <iostream>

#include "stos2.h"

using namespace std;

int main()

{

	Stos stos;

	stos.push(7);
	stos.push(6);
	stos.push(9);
	cout << stos.top() << " szczyt stosu\n";
	stos.pop();
	cout << stos.top() << " szczyt stosu po wywołaniu metody pop\n";
	//------

	Stos stos2(stos);
	cout << stos2.top() << " szczyt 2. stosu powstalego przy pomocy konstruktora kop.\n";
	//------


	Stos stos3 = stos2;
	cout << stos3.top() << " szczyt 3. stosu po przypisaniu mu wartości 2. stosu\n";
	//------

	Stos stosPusty;
	Stos kopiaPusty( stosPusty );

    //cout << kopiaPusty.top();
	return 0;

}
