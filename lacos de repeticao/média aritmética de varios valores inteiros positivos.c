/*Construa um algoritmo que calcule a média aritmética de
vários valores inteiros positivos, inseridos pelo usuário.

O final da leitura acontecerá quando for lido um valor
negativo.

Mostre a média aritmética dos números informados pelo
usuário.*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "");
	
	int numero, contador = 0, soma = 0, media;
	
		printf("Digite um numero: ");
		scanf("%i",&numero);
		
		while (numero > 0){
			soma = soma + numero;
			contador++;
			
			printf("Digite um numero: ");
			scanf("%i",&numero);
				
			if(numero < 0){
				break;
			}
			

		}
	
			media = soma / contador;
			
			printf("Média: %i ", media);
			
		return 0;
		
}
