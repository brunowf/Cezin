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
*/
float Fahren(float celsius){
  float fahren;
  fahren = ((celsius / 5) * 9) + 32;
  return fahren;
}


int main()
{

	pr("converter = ");
	prf(Fahren(20.0), 8);

	return 0;
}
