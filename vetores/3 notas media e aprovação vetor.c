/*Crie um programa que leia 3 notas, armazenando em um vetor 
e calcule a media

-media maior ou igual a 7

mostre as 3 notas informadas e informe a media*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
int main(){
	setlocale(LC_ALL,"");
	float media = 0, soma = 0, notas[3];
	int i;
	
		//solicitando dados
		printf("Digite os elementos do vetor: \n");
		for(i = 0; i <4; i++){
			printf("Nota %iª: ", i + 1);
			scanf("%f",&notas[i]);
			
			soma += notas[i];
		}
		
		//exibindo os dados em um vetor em um laço de repetição 
		for(i = 0;i < 4;i++) {
			printf("Nota %iª: %.1f\n", i+1,notas[i]);
		}
	
		media = soma/i;
		printf("\n\nMédia: %.1f ", media);
	
		if(media >= 7){
			printf("\nAprovado");
		} else if(media >= 5){
			printf("\nRecuperação");
		} else{
			printf("\nReprovado");
		}
	
	return 0;
}
