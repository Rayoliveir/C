/*3 bandas com 5 integrantes cada*/

#include <stdio.h>
#include <locale.h>

#define STRING 100
#define BANDAS 3
#define INTEGRANTES 2

int main(){
	setlocale(LC_ALL,"");
	int i, j;
	char pessoas[INTEGRANTES][BANDAS];
	char bandas[BANDAS][STRING];
	
	for(i = 0;i < BANDAS;i++){
		printf("Informe o nome da %iª banda: ", i + 1);
		scanf("%s",&bandas[i]);
		
		for(j = 0;j < INTEGRANTES;j++){
			printf("Informe o nome do %iº integrante: ", j + 1);
			scanf("%s",&pessoas[i][j]);
		}
		
		printf("\n");
	}

	for(i = 0;i < BANDAS;i++){
		
		printf("%dª Banda: %s",i+1, bandas[i]);
		
		for(j = 0;j < INTEGRANTES;j++){
			printf("Integrantes: %s",j+1, pessoas[i][j]);
		}
		
		printf("\n");
	}
	
	return 0;
}
