/*crie um algoritmo que leia o nome e a idade de 5 pessoas
armazene em vetores
liste o nome e a idade de cada pessoa*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

#define SIZE 5
#define STRING 50

int main(){
	setlocale(LC_ALL,"");
	int idade[SIZE];
	char nome[SIZE][STRING];
	int i;
	
	
	for(i = 0;i < SIZE;i++){
		printf("Informe o nome: ", i + 1);
		scanf("%s",&nome[i]);
		
		printf("Informe a idade: ", i + 1);
		scanf("%i",&idade[i]);
	}
	
	for(i = 0; i < SIZE;i++){
		printf("\nNome: %s ", nome[i]);
		printf("\nIdade: %i ", idade[i]);	
	}
	
	return 0;
}
