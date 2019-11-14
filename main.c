#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "helpinho.h"

float functionCalculadora(float numero1, float numero2, char operacao){
	float resultado;
	switch(operacao){
		case '+':
		resultado = numero1 + numero2;
		break;
		case '-':
		resultado = numero1 - numero2;
		break;
		case '/':
		if (numero2 == 0)
		{
			resultado = 0;
		}else{
			resultado = numero1 / numero2;
		}
		break;
		case '*':
		resultado = numero1 * numero2;
		break;
		default:
		resultado = numero1 + numero2;
		break;
	}
	return resultado;
}

float functionFatorial(float numero){
	float total = 1;
	for (int i = 1; i <= numero; ++i)
	{
		total = total * i;
	}
	return total;
}

int functionBoolPrimo(int numero){
	int resultado = 1;
	for (int i = 2; i < numero; ++i)
	{
		if ((numero % i) == 0)
		{
			resultado = 0;
			i += numero;
		}
	}
	if (numero == 1)
	{
		resultado = 0;
	}
	return resultado;//se == 1, numero = primo, se não, numero = não primo
}

void procedureScanVetor(float vetor[], int tamanho){
	for (int i = 0; i < tamanho; ++i)
	{
		vetor[i] = scnF();
	}
}

float functionBoolContemNoVetor(float numero, float vetor[], int tamanho){
	float resultado = 0;
	for (int i = 0; i < tamanho; ++i)
	{
		if (vetor[i] == numero)
		{
			resultado = 1;
			i += tamanho;
		}
	}
	return resultado;
}

void procedureEncherVetorAleatorio(float vetor[], int tamanho, int parametroRand){
	for (int i = 0; i < tamanho; ++i)
	{
		if (parametroRand == 0)
		{
			vetor[i] = rand();
		}else{
			vetor[i] = rand() % parametroRand;
		}
	}
}

void procedureNumerosRepetidosVetor(float vetor[], int tamanho){
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
