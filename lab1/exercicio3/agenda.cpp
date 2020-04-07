// Autor: Ernesto Rodriguez Gonzalez
// Universidade Federal do Rio de Janeiro

// O programa Agenda ira conter uma classe chamada Agenda que podera receber 3 nomes.
// Os nomes deverao ser passados pelo usuario atraves da execucao do metodo setNames
// Os nomes devem ser armazenados em um atributo privado do tipo array de strings
// Antes de inserir os nomes no array devera haver um metodo que valide o tamanho do nome
// 



#include <iostream>
#include <string>
#include "agenda.h"

#define TAMANHO_MAXIMO_NOME 			10
#define QUANTIDADE_NOMES				 3	

using namespace std;



void Agenda::visualizeNames()
{

	cout << "\n\nNomes na agenda:" << endl;
	for (unsigned int index = 0; index < QUANTIDADE_NOMES; index++)
		std::cout << nomes[index] << endl;
};

void Agenda::setNames()
{
	string auxiliar;
	for (unsigned int index = 0; index < QUANTIDADE_NOMES; index++)
	{
		cout << "Insira o nome " << index + 1 << ": "; 
		getline(cin, auxiliar);
		Agenda::nomes[index] = Agenda::nameValidation(auxiliar);
	};
};

string Agenda::nameValidation(string novaString)
{
	if (novaString.length() > 10)
	{
		cout << "\n\n\nNome com mais de 10 caracteres..." << endl;
		cout << "O nome sera cortado\n\n\n" << endl;
		novaString = novaString.substr(0, 10);
		return novaString;
	}
	else 
		return novaString;

};
