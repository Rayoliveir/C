#include <stdio.h>
#include <locale.h>

#define STRING 100
#define DISCIPLINAS 3
#define NOTAS 2
 
int main(){
	setlocale(LC_ALL,"");
	char materias[DISCIPLINAS][STRING];
	float nota[DISCIPLINAS][NOTAS], media[DISCIPLINAS], soma = 0;
	int i, j;
	
	for(i = 0;i < DISCIPLINAS; i++){
		printf("Informe uma disciplina: ");
		scanf("%s",&materias[i]);
		
		for(j = 0;j < 2;j++){
			printf("Informe uma nota: ");
			scanf("%f",&nota[i][j]);
			
			soma += nota[i][j];
		}
		
		media[i] = soma / j;
		soma = 0;
	}

	for(i = 0;i < DISCIPLINAS;i++){
		printf("\n");
		printf("\nDisciplina: %s", materias[i]);
		
		for(j = 0;j < NOTAS;j++){
			printf("\nNotas: %.1f", nota[i][j]);
			
		}
		printf("\nMédia: %.1f", media[0]);
		
			if(media[0] >= 7){
				printf("\nAprovado");
			}else if(media[0] >=5){
				printf("\nRecuperação");
			}else{
				printf("\nReprovado");
			}
	}

	return 0;
}
