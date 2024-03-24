/*Crie um programa que leia 3 notas, armazenando em um vetor e mostre as notas informadas*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
int main(){
	int notas[3];
	int i;
	
	printf("Digite os elementos do vetor: \n");
	for(i = 0; i <3; i++){
		printf("Nota %i: ", i + 1);
		scanf("%i",&notas[i]);
	}
	
	//exibindo od dados em um vetor em um laço de repetição 
	for(i = 0;i < 3;i++) {
		printf("Elemento %i: %i\n", i+1,notas[i]);
	}
	return 0;
}
