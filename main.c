#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "helpinho.h"



void procedureNumerosRepetidosVetor(float vetor[], int tamanho){//Revisar
	float matriz[tamanho][2];
	for (int i = 0; i < tamanho; ++i)
	{
		matriz[i][0] = vetor[i];
		matriz[i][1] = 0;
		for (int j = 0; j < tamanho; ++j)
		{
			if (vetor[i] == vetor[j] && i != j)
			{
				matriz[i][1]++;
			}
		}
	}
	for (int i = 0; i < tamanho; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			prf(matriz[i][j], 1);
			pr("\t");
		}
		pr("\n");
	}
}


int main()
{
	const int y = 20;
	float z = 20, x = 10, vet[y];
	procedureEncherVetorAleatorio(vet, y, 20);
	procedureNumerosRepetidosVetor(vet, y);

	return 0;
}
