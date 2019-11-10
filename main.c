#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "helpinho.h"

/*
int functionMDC(int numero1, int numero2){
	int vetor[2] = {numero1, numero2};
	int maior = functionRetornarMaiorNumero(vetor, 2), menor = functionRetornarMenorNumero(vetor, 2);
}
*/
int main()
{
	float z = 20, y[2] = {3, 2};
	pr("computador\n");
	procedureReordenarVetorCrescente(y, 2);
	for (int i = 0; i < 2; ++i)
	{
		prf(y[i], 2);
		pr("\n");
	}
	for (int i = 0; i < 2; ++i)
	{
		prf(y[i], 2);
		pr("\n");
	}
	return 0;
}
