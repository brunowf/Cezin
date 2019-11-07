#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "helpinho.h"

/*
-helpinho contém as funções:
--pr(string);imprimir string
--prf(numero float, casas após a vírgula);
--somar(float, float);
--scnF()scanea float e return no mesmo;
--scnI()scanea int e return no mesmo;
--scnS(string)//recebe uma string, scanea ela e muda o seu valor;
--maior(float[], int)recebe um vetor e seu tamanho, então retorna o seu
*/
float Fahren(float celsius){
  float fahren;
  fahren = ((celsius / 5) * 9) + 32;
  return fahren;
}

int main()
{
  float z, y[3] = {5.0, 4.0, 6.0};
  z = maior(y, 3);
  prf(z, 3);

	return 0;
}