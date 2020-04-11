#include <iostream>
#include <vector>
#include "agenda.h"


using namespace std;
int main(){
	Agenda novaAgenda(3);
	string novoNome;

	cout << "Insira os nomes, maximo eh 3" << endl;
	for (int indice = 0; indice < 4; indice ++){
		getline(cin, novoNome);
		novaAgenda.inserirNome(novoNome);
	};

	cout << "Nomes na lista: " << endl;
	novaAgenda.visualizarNomes();

	return 0;
};