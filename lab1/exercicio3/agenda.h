// Autor: Ernesto Rodriguez Gonzalez
// Universidade Federal do Rio de Janeiro

// O programa Agenda ira conter uma classe chamada Agenda que podera receber 3 nomes.
// Os nomes deverao ser passados pelo usuario atraves da execucao do metodo setNames
// Os nomes devem ser armazenados em um atributo privado do tipo array de strings
// Antes de inserir os nomes no array devera haver um metodo que valide o tamanho do nome
// 



// O arquivo agenda.h contem a forma das funcoes usadas no programa
// Agenda.


#include <iostream>
#include <string>

#define TAMANHO_MAXIMO_NOME 			10
#define QUANTIDADE_NOMES				 3	

using namespace std;

class Agenda
{
public:

	// Metodo para o usuario poder visualizar todos os nomes guardados
	void visualizeNames(void);
	void setNames(void);

private:

	// Array de Strings que contera os nomes dos usuarios
	string nomes[QUANTIDADE_NOMES];

	
	string nameValidation(string);

};