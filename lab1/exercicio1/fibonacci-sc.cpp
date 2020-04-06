#include "fibonacci-sc.h"


int calcular_fibonacci(int indice)
{
	if ((indice == 1) || (indice == 2))
		return 1;
	return calcular_fibonacci(indice - 2) + calcular_fibonacci(indice - 1);
}
