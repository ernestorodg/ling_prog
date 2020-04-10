#include "distancia.h"
#include <cmath>
#include <iostream>




// DEFINICOES PARA A CLASSE Ponto::

Ponto::Ponto(){
	coordenadaX = 0;
	coordenadaY = 0;
	coordenadaZ = 0;
};

void Ponto::setPoint(double _coordenadaX,double _coordenadaY,double _coordenadaZ){
	setAxisX(_coordenadaX);
	setAxisY(_coordenadaY);
	setAxisZ(_coordenadaZ);
};

void Ponto::getPoint(){
	std::cout << "Coordenada X: " << getAxisX() << std::endl;
	std::cout << "Coordenada Y: " << getAxisY() << std::endl;
	std::cout << "Coordenada Z: " << getAxisZ() << std::endl;
};


// Metodos get para cada uma das coordenadas para a classe Ponto

double Ponto::getAxisX(){
	return coordenadaX;
};

double Ponto::getAxisY(){
	return coordenadaY;
};

double Ponto::getAxisZ(){
	return coordenadaZ;
};

// Metodos set para cada uma das coordenadas para a classe Ponto

void Ponto::setAxisX(double _coordenadaX){
	coordenadaX = _coordenadaX;
}

void Ponto::setAxisY(double _coordenadaY){
	coordenadaY = _coordenadaY;
}

void Ponto::setAxisZ(double _coordenadaZ){
	coordenadaZ = _coordenadaZ;
}





//  +++++++++++++++++++++++++++++




// DEFINICOES DA CLASSE Distancia:


Distancia::Distancia(){
	distanciaEntrePontos = 0;
};



double Distancia::getDistance(){
	setDistance();	
	return distanciaEntrePontos;
};


void Distancia::setDistance(){
	double distanciaX;
	double distanciaY;
	double distanciaZ;

	distanciaX = primeiroPonto.getAxisX() - segundoPonto.getAxisX();
	distanciaY = primeiroPonto.getAxisY() - segundoPonto.getAxisY();
	distanciaZ = primeiroPonto.getAxisZ() - segundoPonto.getAxisZ(); 

	// distancia entre dois pontos eh : D^2 = (X1 - X2)^2 + (Y1 - Y2)^2 + (Z1 - Z2)^2

	distanciaEntrePontos = sqrt(pow(distanciaX, 2) + pow(distanciaY, 2) + pow(distanciaZ, 2));
};

// Atribuicao dos pontos da classe Distancia:

void Distancia::setFirstPoint(double _coordenadaX, double _coordenadaY, double _coordenadaZ){
	primeiroPonto.setAxisX(_coordenadaX);
	primeiroPonto.setAxisY(_coordenadaY);
	primeiroPonto.setAxisZ(_coordenadaZ);
};

void Distancia::setSecondPoint(double _coordenadaX, double _coordenadaY, double _coordenadaZ){
	segundoPonto.setAxisX(_coordenadaX);
	segundoPonto.setAxisY(_coordenadaY);
	segundoPonto.setAxisZ(_coordenadaZ);
};




