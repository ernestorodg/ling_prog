#include "fibonacci-sc.h"
#include <iostream>

#define 	OK					0



int main()
{
	int indice;

	std::cout << "Insira o indice desejado para calcular fibonacci. \n";

	std::cin >> indice;

	std::cout << "O elemento calculado para o indice " << indice << " foi " << calcular_fibonacci(indice) << std::endl;

	return (OK);
}


