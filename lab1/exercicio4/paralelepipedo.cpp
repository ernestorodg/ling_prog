#include "paralelepipedo.h"
#include <iostream>


Paralelepipedo::Paralelepipedo(void)
{
	std::cout << "Insira o comprimento: " << std::endl;
	std::cin >> Paralelepipedo::comprimento;
	std::cout << "Insira a largura: " << std::endl;
	std::cin >> Paralelepipedo::largura;
	std::cout << "Insira a altura: " << std::endl;
	std::cin >> Paralelepipedo::altura;

	Paralelepipedo::setVolume(altura, comprimento, largura);
};


void Paralelepipedo::setVolume(double altura, double comprimento, double largura)
{
	volume = altura * comprimento * largura;
};

double Paralelepipedo::getVolume()
{
	return volume;
};