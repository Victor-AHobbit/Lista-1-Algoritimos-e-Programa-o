#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL,"Portuguese");
	
	double nota1, nota2, media;
	
	printf("Digite a primeira nota: \n");
		scanf("%lf", &nota1);

	if (nota1 > 10 or nota1 < 0) return 0;
	else
	
	printf("Digite a segunda nota: \n");
		scanf("%lf", &nota2);
	
	if (nota2 > 10 or nota2 < 0) return 0;
	else;
	
	media = (nota1*3.5 + nota2*7)/11;
	
	printf("O valor da média é de: %.2lf ", media);
	
}
