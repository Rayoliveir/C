/*Crie um algoritmo que receba três notas de 4 alunos 
e informe a media
-Marta Silva
	-1ª nota: 7
	-2ª nota: 9
	-3ª nota: 8
-João Santos
	-1ª nota: 8
	-2ª nota: 7
	-3ª nota: 3
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>
#define STRING 200
int main(){
	setlocale(LC_ALL, "");
	
	char nomeAluno[4][STRING];
	float notasAlunos[4][3], media[4], somaNotas = 0;
	int i, j;
	
	for(i = 0;i < 4;i++){
		printf("\nDigite o nome do %iº aluno: ", i + 1);
		scanf("%s",&nomeAluno[i]);
		
		for(j = 0; j < 3; j++){
			printf("Digite a %iª nota: ", j + 1);
			scanf("%f",&notasAlunos[i][j]);
		
		somaNotas = somaNotas + notasAlunos[i][j];	
		
		}
		media[i] = somaNotas/j;	
		somaNotas = 0;
		
		printf("\n");
	}
	
	printf("\n*****EXIBINDO RESULTADOS*****");
		for(i = 0;i < 4;i++){
		printf("\n%iº Aluno: %s \n", i+1, nomeAluno[i]);

			for(j = 0; j < 3; j++){
			printf("%i nota: %.1f ", j+1, notasAlunos[i][j]);
			printf("\n");	
		}
		
	printf("\nMedia: %.1f", media[i]);		
	printf("\n");
	}
	
	return 0;
}


