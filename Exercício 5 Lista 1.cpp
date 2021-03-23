#include<stdio.h>


int main() {

	int metrosfio, rolosfio, avulsos;

	printf("Digite quantos metros de fio você precisa para a obra:\n");
		scanf("%d", &metrosfio);
		
		rolosfio = metrosfio/50;
		avulsos = metrosfio%50;
		
	printf("Rolos de fio: %d\n", rolosfio);
	printf("Metros avulsos de fio: %d\n", avulsos);



	return 0;

}
