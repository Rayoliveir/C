/*crie um algoritmo que receba o nome d 3 disciplinas
duas notas para cada um e mopstre

nome da disciplina: sdaghfd
1 nota
2 nota
media*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>
#define DISCIPLINAS 3
#define STRING 200
int main(){
	setlocale(LC_ALL, "");
	char disciplinas[3][200];
	float notas[3][2], media[2], soma = 0;
	int i, j;

	for(i = 0;i < 3;i++){
		printf("Informe a %i disciplina: ", i+1);
		scanf("%s",&disciplinas[i]);
		
		for(j = 0; j < 2;j++){
			printf("Informe a %i nota: ", j+1);
			scanf("%f",&notas[i][j]);
			
			soma+=notas[i][j];
		}
		media[i] = soma/j;
		soma = 0;
	}
	
		printf("\n*****EXIBINDO RESULTADOS*****");
		for(i = 0;i < 3;i++){
		printf("\n%iº Materia: %s \n", i+1, disciplinas[i]);

			for(j = 0; j < 2; j++){
			printf("%i nota: %.1f ", j+1, notas[i][j]);
			printf("\n");	
		}
		
	printf("\nMedia: %.1f", media[i]);		
	printf("\n");
	}
	
	return 0;
}
	
