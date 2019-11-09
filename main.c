#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "helpinho.h"

int main()
{

	float z, y[3] = {5.7, 5.7, 6.345};
	int x;
	z = functionSomarVetor(y);
	x = sizeof(y)/4;
	prf(x, 3);

	return 0;
}
