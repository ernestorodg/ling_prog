// Classe ponto: +++++++++++++++

class Ponto{
public:
	void getPoint();
	void setPoint(double, double, double);
	Ponto();

	double getAxisX();
	double getAxisY();
	double getAxisZ();

	void setAxisX(double);
	void setAxisY(double);
	void setAxisZ(double);

private:
	
	double coordenadaX;
	double coordenadaY;
	double coordenadaZ;
};