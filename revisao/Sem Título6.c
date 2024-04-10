/*
Crie um algoritmo que receba o nome de tres disciplinas, receba tres notas, entre zero
e dez, para cada disciplina e mostre a medla ponderada de cada disciplina:

- Exemplo:
Nome da disciplina: Logica de programaçao
1a nota: 8,0 peso 3
2a nota: 9,0 peso 3
3a nota: 7,0 peso 4
Média: 7,9
*/

#include <stdio.h>
#include <locale.h> 
#define NOTAS 3
#define DISCIPLINAS 3

int main(){
	setlocale(LC_ALL,"");
	
	int i, j, p;
	float media[DISCIPLINAS], soma = 0, notas[DISCIPLINAS][NOTAS];
	char disciplinas[DISCIPLINAS]; 
	float peso[3];
	
	for (i = 0; i < DISCIPLINAS; i++) {
		soma = 0;
		
		printf ("Informe o nome da %iª disciplina: ", i + 1);
		scanf ("%s",&disciplinas[i]);
		
					
		for (j = 0; j < NOTAS; j++) {
			printf ("Informe a %iª nota: ", j + 1);
			scanf ("%f",&notas[i][j]);
			soma = soma + notas[DISCIPLINAS][NOTAS];
		}
		
			printf("Informe o peso da disciplina %f: ", p + 1);
			scanf("%f",&peso[3]);
	}			

	
	for (i = 0; i < NOTAS; i++){
		soma = 0;
		
	}
	
	printf ("\n");
	
	for (i = 0;i < DISCIPLINAS; i++){
		printf("Disciplinas: %s",i + 1, disciplinas[i]);
		
	for(j = 0; j < NOTAS; j++){
			printf("%iª Nota: %.1f",j + 1, notas[i][j]);
		}
	}
	
	
	return 0;
}
