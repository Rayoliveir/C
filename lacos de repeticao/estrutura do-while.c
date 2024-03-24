//estrutura do-while

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int contador = 0;
	char continua;

	do{
		//comandos a serem repetidos

		printf("repetindo...\n");

		contador = contador + 1;

		printf("Tecle 's' se deseja continuar\n");
		scanf("%c",&continua);
		fflush(stdin);

	} while(continua == 's');

	//exibindo quantidade de vezes que o laço de repetição aconteceu
	printf("O bloco foi repetido %d vezes", contador);

	return 0;
}
