//media 4 notas

#include <stdio.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	//declarando variaveis
	int nota, media,i, soma;
	
	//solicitando dados
		for (i = 1; i <= 4; i++){
		printf("digite a %iª nota: ", i);
		scanf("%i",&nota);
		
		soma=soma+nota;
	}
		
		media=soma/4;
	//exibindo dados
	printf("\nMedia: %i ", media);
	return 0;
}
