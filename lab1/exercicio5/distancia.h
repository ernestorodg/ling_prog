#include "ponto.h"




// CLASSE DISTANCIA
// ARQUIVO DISTANCIA.H


class Distancia{
public:
	Distancia();
	double getDistance();

	void setFirstPoint(double, double, double);
	void setSecondPoint(double, double, double);

private:
	Ponto primeiroPonto;
	Ponto segundoPonto;
	double distanciaEntrePontos;
	void setDistance();
};