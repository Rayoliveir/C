#include <stdio.h>
/*Faça um algoritmo que solicite do usuario um numero
inteiro qualquer e mostrar no terminal se o numero
informado se é par ou impar.*/
int main(){
	//declaracao de variaveis
	int numero;
	char par, impar;
	
	//solicitando dados
	printf("Informe um numero: ");
	scanf("%i",&numero);
	
	//if-else
	if(numero % 2 == 0){
		printf("Par");
	}
	else{
		printf("Impar");
	}
	
	return 0;
}
