/*Escreva um algoritmo que leia a nota de um aluno.
Caso seja menor que 0 ou maior que 10, mostre a pergunta
novamente.
Mostre a nota informada pelo usuário.*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	//variaveis
	int nota, contador;

	//do-while
	do{

	contador = contador + 1;

	printf("Digite a nota: ");
	scanf("%i",&nota);
	fflush(stdin);

	} while(nota < 0 || nota > 10);

	//exibindo
	printf("Nota: %i", nota);


	return 0;
}
