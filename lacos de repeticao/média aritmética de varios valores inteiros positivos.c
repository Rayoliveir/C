/*Construa um algoritmo que calcule a m�dia aritm�tica de
v�rios valores inteiros positivos, inseridos pelo usu�rio.

O final da leitura acontecer� quando for lido um valor
negativo.

Mostre a m�dia aritm�tica dos n�meros informados pelo
usu�rio.*/
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
			
			printf("M�dia: %i ", media);
			
		return 0;
		
}
