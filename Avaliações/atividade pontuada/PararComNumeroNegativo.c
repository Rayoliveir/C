/*Construa um algoritmo que calcule a média aritmética de vários
números inteiros positivos, inseridos pelo usuário.
O final da leitura acontecerá quando for lido um número negativo.
Mostre a média aritmética dos números informados pelo usuário.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int numeros, contador = 0;
	float soma = 0, media;
	
	printf("Insira um numero inteiro: ");
	scanf("%i",&numeros);	
	
	while(1){
		printf("Insira um numero inteiro: ");
		scanf("%i",&numeros);
		
			
			if(numeros < 0){
				break;
			}
	
			soma += numeros;
			contador++;
		
	}
	
	media = soma/contador;
	
	printf("\nSoma: %i", soma);
	printf("\nMédia: %i", media);
	
	return 0;
}
