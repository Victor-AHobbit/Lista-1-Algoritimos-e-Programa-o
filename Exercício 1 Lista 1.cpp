#include<stdio.h>


int main() {

	int horas, minutos, segundos;

	printf("Digite a quantidade de horas que voce tem: \n");
		scanf("%d", &horas);
	minutos = horas * 60;
	segundos = minutos *60;
	printf("Voce tem ao todo: \n");
		printf("Hora(s): %d\n", horas);
		printf("Minutos: %d\n", minutos);
		printf("Segundos: %d\n", segundos);


	return 0;

}
