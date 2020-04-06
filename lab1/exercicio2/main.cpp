#include "fibonacci-cc.h"
#include <iostream>

#define 	OK					0



int main()
{
	Fibonacci fib; 
	int indice;

	std::cout << "Insira o indice desejado para calcular fibonacci. \n";

	std::cin >> indice;

	fib.computeFibonacci(indice);

	std::cout << "O elemento calculado para o indice " << indice << " foi " << fib.getResult() << std::endl;

	return (OK);
}


