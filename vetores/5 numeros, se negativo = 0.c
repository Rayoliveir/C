/*crie um algoritmo que receba do usuario valores
armazene em um vetor 5 números, caso seja
informado um valor negativo atribua o valor 0


liste os valores do vetor*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

#define SIZE 5

int main(){
	setlocale(LC_ALL,"");
	int numeros[SIZE]; 
	int i;
	
	for(i = 0;i < SIZE;i++){
		printf("Informe %i número: ", i + 1);
		scanf("%i",&numeros[i]);
		
		if(numeros[i] < 0){
			numeros[i] = 0;
		}
	}
	
	for(i = 0; i < SIZE;i++){
		printf("\nNumero: %i", numeros[i]);	
	}
	
	return 0;
}
