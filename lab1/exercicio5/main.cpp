#include <iostream>
#include <cmath>
#include "distancia.h"


// +++++++++++++++++++++++++++++++
int main(){
	
	Distancia distancia;

	distancia.setFirstPoint(2, 0, 0);
	distancia.setSecondPoint(0, 0, 0);

	std::cout << "Distancia obtida: " << distancia.getDistance() << std::endl;

	return 0;
};