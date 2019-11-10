#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "helpinho.h"

int main()
{
	float z = 20, y = 5, x = 10;
	z = functionAreaQuadrado(y);
	pr(" Quadrado: ");
	prf(z, 9);
	z = functionAreaRetangulo(y, x);
	pr("\n Retangulo: ");
	prf(z, 9);
	z = functionAreaTriangulo(y, x);
	pr("\n Triangulo: ");
	prf(z, 9);
	z = functionAreaTrapezio(y, x, 10);
	pr("\n Trapezio: ");
	prf(z, 9);
	z = functionAreaLosango(y, x);
	pr("\n Losango: ");
	prf(z, 9);
	z = functionAreaCirculo(3);
	pr("\n Circulo: ");
	prf(z, 9);
	return 0;
}
