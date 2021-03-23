#include<stdio.h>


int main() {

	float media1, media2, media3, mediatotal;
	
	printf("Digite 3 numeros para o calculo da media aritmetica: \n");
		printf("Primeiro numero: \n");
			scanf("%g", &media1);
		printf("Segundo numero: \n");
			scanf("%g", &media2);
		printf("Terceiro numero: \n");
			scanf("%g", &media3);

	mediatotal = (media1 + media2 + media3)/3;
	printf("\n%g + %g + %g /3 = %g", media1, media2, media3, mediatotal);



	return 0;

}
