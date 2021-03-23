#include<stdio.h>


int main() {

	float raioCirculo, areaCirculo, raioQuadrado;
	
	printf ("Digite o valor do raio: \n");
		scanf("%g", &raioCirculo);
			raioQuadrado = raioCirculo * raioCirculo;
			areaCirculo = 3.14 * raioQuadrado;

	printf ("Raio do circulo %g\n", raioCirculo);
	printf ("Raio ao quadrado %g\n", raioQuadrado);
	printf ("Area do circulo %g\n", areaCirculo);
	
	return 0;
}
