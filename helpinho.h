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
float functionRetornarMaiorNumero(float valores[], int tam){
  float maior;
  int trocou = 0;
  while(trocou != 1){
    trocou = 1;
    for(int z = 0; z < tam - 1; z++){
      if(valores[z] < valores[z + 1]){
        float aux;
        aux = valores[z];
        valores[z] = valores[z + 1];
        valores[z + 1] = aux;
        trocou = 0;
      }
    }
  }
  maior = valores[0];
  return maior;
}

/*****fv0003*****/
float functionRetornarMenorNumero(float valores[],int tamanho){
  float maior;
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
  maior = valores[0];
  return maior;
}

/*****fe0001*****/
float functionConverterParaFahrenheit(float celsius){
  float fahren;
  fahren = (((float)celsius / 5.0) * 9.0) + 32;
  return fahren;
}