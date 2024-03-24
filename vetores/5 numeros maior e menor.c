/*crie um programa que leia 5 numeros, armazenando em um vetor e informe qual é o menor e o maior
mostre os numeros informados*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

int main(){
	setlocale(LC_ALL,"");
	int numero[5];
	int i, maiorNumero = INT_MIN, menorNumero = INT_MAX;
	
	printf("Digite os numeros do vetor: \n");
	for(i = 0; i <5; i++){
		printf("Informe o %iº número: ", i + 1);
		scanf("%i",&numero[i]);
		
		if(numero[i] < menorNumero){
			menorNumero = numero[i];
		}
		
		if(numero[i]> maiorNumero){
			maiorNumero = numero[i];
		}
	}
	
	//exibindo od dados em um vetor em um laço de repetição 
	for(i = 0;i < 5;i++) {
		printf("%iº número: %i\n", i+1,numero[i]);
	}
	
	printf("\nMaior numero: %i", maiorNumero);
	printf("\nMenor numero: %i", menorNumero);
	
	return 0;
}
