#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "helpinho.h"

int main()
{
	float z = 20, y[2] = {z, 2};
	pr("computador\n");
	z = functionMultiplicacao(y, 2);
	prf(z, -7);
	return 0;
}
