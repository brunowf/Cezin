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

void procedureEquacao2Grau(float a, float b, float c){
	float delta = (b * b) - 4 * a * c;
	if (a != 0)
	{
		if (delta < 0)
		{
			pr("A equação não possui resultados reais\n");
		}else
		{
			float xl = (-b + sqrt(delta)) / (2 * a), xll = (-b - sqrt(delta)) / (2 * a);
			pr("As raízes da equação são:\nxl: ");
			prf(xl, 9);
			pr("\nxll: ");
			prf(xll, 9);
		}
	}else{
		pr("Não é uma equação do 2° grau!");
	}
}

void procedureImprimeVetor(float vetor[], int tamanho){
	for (int i = 0; i < tamanho; ++i)
	{
		prf(vetor[i], 9);
		pr("\n");
	}
}

void procedureSequenciaFibonacci(float vetor[], int tamanho){
	for (int i = 0; i < tamanho; ++i)
	{
		if (i == 0 || i == 1)
		{
			vetor[i] = 1;
		}else{
			vetor[i] = vetor[i - 1] + vetor[i - 2];
		}
	}
}

int main()
{
	int y = 10;
	float z[y];
	procedureSequenciaFibonacci(z, y);
	procedureImprimeVetor(z, y);
	return 0;
}
