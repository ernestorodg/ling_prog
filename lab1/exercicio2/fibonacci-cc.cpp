//Programas devem comecar com comentarios
//

/*
 * Objetos na programacao se assemelham a objetos na vida real
 * Caracteristicas == Atributos (in english: data members)
 * Atividades == Metodos
*/

// Boas atitudes de programacao: O nome da classe comeca com maiuscula
//								 O objeto gerado a partir da classe tambem comeca com maiuscula


#include "fibonacci-cc.h"


void Fibonacci::computeFibonacci(int index)
{
	result = setResult(index);
}


int Fibonacci::getResult()
{
	return result;
}

	

int Fibonacci::setResult(int index)
{	
	if ((index == 1) || (index == 2))
		return 1;

	return (setResult(index - 2) + setResult(index - 1));
}

// nao eh necessario colocar os atributos iniciando com Fibonacci:: 
