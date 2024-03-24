/*Crie um algoritmo que preencha um vetor com 10 numeros reais, calcule 
a quantidade de numeros negativos e a soma dos numeros positivos*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

#define SIZE 10

int main(){
	setlocale(LC_ALL,"");
	
	int numero[SIZE];
	int i, negativo = 0, soma = 0;
	
	for(i = 0;i < SIZE;i++){
		printf("Informe %iº número: ", i + 1);
		scanf("%i",&numero[i]);
		
			if(numero[i] < 0){
				negativo++;
			} else{
				soma += numero[i];
			}
	}
	
		printf("\nSoma positivos:%i ", soma);
		printf("\nNumeros negativos:%i ", negativo);
	
	return 0;
}
	
