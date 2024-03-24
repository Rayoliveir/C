#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
int main(){
	int vetor[5];
	int i;
	
	fflush(stdin);
	printf("Digite os elementos do vetor: \n");
	for(i = 0; i <5; i++){
		printf("Elemento %i: ", i + 1);
		scanf("%i",&vetor[i]);
	}
	
	//exibindo od dados em um vetor em um laço de repetição 
	for(i = 0;i < 5;i++) {
		printf("Elemento %i: %i\n", i+1,vetor[i]);
	}
	return 0;
}
