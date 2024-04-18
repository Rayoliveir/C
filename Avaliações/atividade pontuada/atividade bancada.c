#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

#define SIZE 5

int main(){
		setlocale(LC_ALL,"");
		int positivos, negativos = 0, pares, impares = 0;
		int numerosInseridos, maiorNumero = INT_MIN, menorNumero = INT_MAX;
		int mediaPares, mediaImpares, mediaTodos;
		int numeros[SIZE], i;
		int somaImpares = 0, somaPares = 0, soma = 0;
	
		for(i = 0; i < SIZE; i++){
			printf("Insira o %iº numero: ", i+1);
			scanf("%i",&numeros[i]);
			numerosInseridos++;
			
			if(numeros[i] % 2 == 0){
				pares++;
				somaPares += numeros[i];
				mediaPares = somaPares / pares;
			}else{
				impares++;
				somaImpares += numeros[i];
				mediaImpares = somaImpares / impares;
			}
			
			
			if(numeros[i] > 0){
				positivos++;
			}else{
			negativos++;
			}
			
			soma += numeros[i];
			
			if (numeros[i] > maiorNumero) {
				maiorNumero = numeros[i];
			} else if (numeros[i] < menorNumero) {
				menorNumero = numeros[i];
			}		
		}
		
		mediaTodos = soma / 5;
		
		printf("\nPares: %i", pares);
		printf("\nImpares: %i", impares);
		printf("\nPositivos: %i", positivos);
		printf("\nNegativos: %i", negativos);
		printf("\nQuantidade de números inseridos: %i", numerosInseridos);
		printf("\nMaior número: %i", maiorNumero);
		printf("\nMenor número: %i", menorNumero);
		printf("\nMédia dos números pares: %i", mediaPares);
		printf("\nMédia dos números ímpares: %i", mediaImpares);
		printf("\nMédia total: %i", mediaTodos);
		
		printf("\n\nOrdem inversa: ");
		for(i = 4; i >= 0; i--) {
			printf(" %i, ", numeros[i]);
		}
		
		return 0;
}
