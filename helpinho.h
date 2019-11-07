float somar(float num1, float num2){//somar 2 valores
	float total;
	total = num1 + num2;
	return total;
}

void pr(char string[200]){//imprimir uma string
	printf("%s", string);
}

void prf(float numero, int virgula){// numero = o número que vai ser impresso, virgula = quantidade de números após a virgula
	switch(virgula){
		case 0:
		printf("%.0f", numero);
		break;

		case 1:
		printf("%.1f", numero);
		break;

		case 2:
		printf("%.2f", numero);
		break;

		case 3:
		printf("%.3f", numero);
		break;

		case 4:
		printf("%.4f", numero);
		break;

		case 5:
		printf("%.5f", numero);
		break;

		case 6:
		printf("%.6f", numero);
		break;

		case 7:
		printf("%.7f", numero);
		break;

		case 8:
		printf("%f", numero);
		break;

		default:
		printf("%f", numero);
		break;
	}
}

float scnF(){//fazer um scan de um float e retornar o mesmo
	float numero;
	scanf("%f", &numero);
	return numero;
}

int scnI(){//fazer um scan de um integer e retornar o mesmo
	int numero;
	scanf("%d", &numero);
	return numero;
}

void scnS(char s[]){//recebe uma string, scanea ela e muda o seu valor
	scanf(" %s", s);
}