/*
	TP 2 - Dado un numero ingresado por el usuario determinar si es par.
	Federico Daniel Bustamante
	23/04/2015
*/

#include <iostream>

int main() {
	int a;

	std::cout << "Ingrese un numero: ";

	std::cin >> a;

	std::cout << "El numero es par: " << (a % 2 == 0) << " (1:verdadero, 0:falso)\n";

	return 0;
}
