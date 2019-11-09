#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "helpinho.h"

int main()
{
  float z, y[3] = {5.7, 5.7, 6.345};
  z = functionRetornarMaiorNumero(y, 3);
  prf(z, 3);
  pr("\n");
  z = functionRetornarMenorNumero(y, 3);
  prf(z, 3);
  pr("\n");
  z = 24;
  z = functionConverterParaFahrenheit(z);
  prf(z, 3);

	return 0;
}