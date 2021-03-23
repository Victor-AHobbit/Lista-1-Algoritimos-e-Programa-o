#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	char usuario;
	int horas, salariohora, matricula, sexo, salario, close;

		printf("Bem vindo ao registro da empresa! Precisamos de algumas informações simples que não levam mais que 5 minutos...\n");
		printf("Qual o seu nome?\n");
			scanf("%s", &usuario);
		
		printf("Sexo? Digite 0 para definir como Masculino e 1 para definir como Feminino\n");
			scanf("%d", &sexo);
		
		printf("Número de matricula?(Apenas números)\n");
			scanf("%d", &matricula);
		
		printf("Horas trabalhadas?(Apenas números)\n");
			scanf("%d", &horas);
		
		printf("Quanto você ganha por hora?(Apenas números)\n");
			scanf("%d", &salariohora);
			
		system("cls");
			
		printf("Seu registro esta completo, aqui as informações: \n\n");
			printf("Nome: %s \n", &usuario);

		  		if (sexo == 1){

		  			printf("Sexo: Feminino");
		  		}else{
		  			printf("Sexo: Masculino");}

		  		printf("\nMatricula: %d\n", matricula);
				printf("Horas Trabalhadas: %d\n", horas);
				printf("Valor por hora: %d\n", salariohora);
					salario = horas * salariohora;
				printf("Salário: %d\n\n\n\n", salario);





				printf("Digite um número e pressione enter para fechar o programa. \n");
					scanf("%d", &close);
}
