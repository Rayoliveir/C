/*6-Faça um algoritmo para receber um numero qualquer e informar na
tela se é par ou impar.*/

#include <stdio.h>
#include <locale.h>

void cabecalho(){
	system("cls || clear");
	printf(" ===SENAI===");
	fflush(stdin);
}
int main(){
	setlocale(LC_ALL, "");
	int numero;
	char par, impar;
	
	printf("Informe um numero: ");
	scanf("%i",&numero);

	if(numero % 2 == 0){
		printf("Par");
	}
	else{
		printf("Impar");
	}

	return 0;
}
	
