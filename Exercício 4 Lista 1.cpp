#include<stdio.h>


int main() {

	int divisor, dividendo, quociente, resto;
	printf("Digite 2 numeros para que seja fornecido o resto e o quociente da divisao do primeiro pelo segundo numero.\n");
		printf("Escreva o dividendo: \n");
			scanf("%d", &dividendo);
		printf("Escreva o divisor: \n");
			scanf("%d", &divisor);
			
	quociente = dividendo/divisor;
	resto = dividendo%divisor;
			
			
	printf("O quociente da divisao: %d\n", quociente);
	printf("O resto da divisao: %d", resto);




	return 0;

}
