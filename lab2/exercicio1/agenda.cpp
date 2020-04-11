#include <iostream>
#include <vector>
#include <string>
#include "agenda.h"


// ateh agora eu nao entendo muito bem como que funciona a questao de ter um 
// arquivo .h e outro do tipo .cpp na hora de fazer o #include em cada um ?

using namespace std;

// Construtor da classe agenda, recebe o numero maximo de nomes
// que a agenda vai poder guardar.
Agenda::Agenda(double _quantidadeMaximaNomes){
	numeroMaximoNomes = _quantidadeMaximaNomes;
}

// void inserirNome(string) recebe uma string, faz a validacao de ter no maximo 10 caracteres, 
// para depois colocar a string recebida (caso tenha menos de 10 caracteres)
// ou a string cortada (caso tenha mais de 10 caracteres)
// no objeto primeiroVetor, da classe vector.
void Agenda::inserirNome(string _novoNome){

	if (primeiroVetor.size() >= numeroMaximoNomes){
		cout << "Agenda cheia. Nao sera permitido colocar o ultimo nome." << endl; 
	}
	else {
		primeiroVetor.push_back(nameValidation(_novoNome));
	}
};

// void visualizarNomes() mostra todos os nomes dentro do atributo privado primeiroVetor
void Agenda::visualizarNomes(){
	for (string indice : primeiroVetor){
		cout << indice << endl;
	};
};

//  string nameValidation(string) recebe uma string e verifica se tem menos 10 caracteres.
// Caso tenha menos, retorna a string recebida.
// Caso tenha mais, retorna os 10 primeiros caracteres da string recebida.
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