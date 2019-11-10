/*****fv0001*****/
float functionSomarVetor(float valores[], int tamanho){
	float total = 0;
	for(int i = 0; i < tamanho; ++i){
		total+=(float)(valores[i]);
	}
	return total;
}

/*****p00001*****/
void pr(char string[]){
	printf("%s", string);
}

/*****p00002*****/
void prf(float numero, int virgula){
	switch(virgula){
		case 0:
		printf("%.0f", (float)numero);
		break;

		case 1:
		printf("%.1f", (float)numero);
		break;

		case 2:
		printf("%.2f", (float)numero);
		break;

		case 3:
		printf("%.3f", (float)numero);
		break;

		case 4:
		printf("%.4f", (float)numero);
		break;

		case 5:
		printf("%.5f", (float)numero);
		break;

		case 6:
		printf("%.6f", (float)numero);
		break;

		case 7:
		printf("%.7f", (float)numero);
		break;

		case 8:
		printf("%f", (float)numero);
		break;

		default:
		printf("%f", (float)numero);
		break;
	}
}

/*****f00001*****/
float scnF(){
	float numero;
	scanf("%f", &numero);
	return numero;
}

/*****f00002*****/
int scnI(){
	int numero;
	scanf("%d", &numero);
	return numero;
}

/*****p00003*****/
void scnS(char s[]){
	scanf(" %s", s);
}

/*****fv0002*****/
float functionRetornarMaiorNumero(float valores[], int tamanho){
	float maior;
	float vetor[tamanho];
	for (int i = 0; i < tamanho; ++i)
	{
		vetor[i] = valores[i];
	}
	int trocou = 0;
	while(trocou != 1){
		trocou = 1;
		for(int z = 0; z > tamanho - 1; z++){
			if(vetor[z] > vetor[z + 1]){
				float aux;
				aux = vetor[z];
				vetor[z] = vetor[z + 1];
				vetor[z + 1] = aux;
				trocou = 0;
			}
		}
	}
	maior = vetor[0];
	return maior;
}

/*****fv0003*****/
float functionRetornarMenorNumero(float valores[],int tamanho){
	float menor;
	float vetor[tamanho];
	for (int i = 0; i < tamanho; ++i)
	{
		vetor[i] = valores[i];
	}
	int trocou = 0;
	while(trocou != 1){
		trocou = 1;
		for(int z = 0; z < tamanho - 1; z++){
			if(vetor[z] > vetor[z + 1]){
				float aux;
				aux = vetor[z];
				vetor[z] = vetor[z + 1];
				vetor[z + 1] = aux;
				trocou = 0;
			}
		}
	}
	menor = vetor[0];
	return menor;
}

/*****fe0001*****/
float functionConverterParaFahrenheit(float celsius){
	float fahren;
	fahren = (((float)celsius / 5.0) * 9.0) + 32;
	return fahren;
}

/*****fe0002*****/
int functionSomaIntervalo(int numero1, int numero2){
	float vetor[2] = {numero1, numero2};
	int somaIntervalo = 0;
	int menor = functionRetornarMenorNumero(vetor, 2);
	int maior = functionRetornarMaiorNumero(vetor, 2);
	for (int i = menor; i <= maior; ++i)
	{
		somaIntervalo += i;
	}
	return somaIntervalo;
}

/*****fv0004*****/
float functionMediaVetor(float valores[], int tamanho){
	float media = functionSomarVetor(valores, tamanho) / tamanho;
	return media;
}
/*****######*****/
float functionMultiplicacao(float valores[], int tamanho){
	float total = valores[0];
	for (int i = 1; i < tamanho; ++i)
	{
		total *= valores[i];
	}
	return total;
}

/*****######*****/
void procedureReordenarVetorCrescente(float valores[], int tamanho){
	int trocou = 0;
	while(trocou != 1){
		trocou = 1;
		for(int z = 0; z < tamanho - 1; z++){
			if(valores[z] > valores[z + 1]){
				float aux;
				aux = valores[z];
				valores[z] = valores[z + 1];
				valores[z + 1] = aux;
				trocou = 0;
			}
		}
	}
}

/*****######*****/
void procedureReordenarVetorDecrescente(float valores[], int tamanho){
	int trocou = 0;
	while(trocou != 1){
		trocou = 1;
		for(int z = 0; z < tamanho - 1; z++){
			if(valores[z] < valores[z + 1]){
				float aux;
				aux = valores[z];
				valores[z] = valores[z + 1];
				valores[z + 1] = aux;
				trocou = 0;
			}
		}
	}
}