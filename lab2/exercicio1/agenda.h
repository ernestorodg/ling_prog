#include <iostream>
#include <vector>

using namespace std;
class Agenda {
public:


	void inserirNome(string);
	void visualizarNomes();
	Agenda(double);

private:
	vector<string> primeiroVetor;
	string nameValidation(string);
	double numeroMaximoNomes;
};


