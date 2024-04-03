/*
altere o algoritmo que acabou de criar 
faça com que o usuario insira inteiros ate que seja inserido o numero 0

mostre:
1. Aquantidade de numeros positivos que sao pares e impares
2. A quantidade de numeros positivos e negativos
3. A quantidade de numeros inseridos
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

int main(){
	setlocale(LC_ALL,"");
	int pares = 0, impares = 0;
	int numero, qtdNumeros;
	int positivo = 0, negativo;
	
	do{
		printf("Insira um Número: ");
		scanf("%i",&numero);
		
		if(numero != 0){
			qtdNumeros++;
		}
		
		
		if(numero > 0){
			positivo++;
			
				if(numero % 2 == 0){
					pares++;
				}else{
					impares++;
				}
		}else if(numero < 0){
			negativo++;
		}
	}while (numero != 0);
		
	printf("\n==MOSTRANDO DADOS==");
	printf("\n\nNumeros positivos pares: %i", pares);
	printf("\nNumeros positivos impares: %i", impares);
	printf("\n\nNumeros positivos: %i", positivo);
	printf("\nNumeros negativos: %i", negativo);
	printf("\n\nQuantidade numeros inseridos: %i", qtdNumeros);
	
	return 0;
}

	
