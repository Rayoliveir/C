/*Crie um algoritmo que receba três notas de dois alunos 
e mostre

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
	
	char nomeAluno[2][STRING];
	float notasAlunos[2][3];
	int i, j;
	
	for(i = 0;i < 2;i++){
		printf("\nDigite o nome do %i aluno: ", i + 1);
		scanf("%s",&nomeAluno[i]);
		
		for(j = 0; j < 3; j++){
			fflush(stdin);
			printf("\n");
			printf("Digite a %i nota: ", j + 1);
			scanf("%f",&notasAlunos[j]);
		}
	printf("\n");
	}
	
	printf("\n*****EXIBINDO RESULTADOS*****");
		for(i = 0;i < 2;i++){
		printf("\n%iº Aluno: %s \n", i+1, nomeAluno[i]);

			for(j = 0; j < 3; j++){
			fflush(stdin);
			printf("\n");
			printf("Digite a %i nota: %.1f ", j+1, notasAlunos[i][j]);
}
}
	return 0;
}










