//nota 0 10

#include <stdio.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "");
	int contador = 0;
	int nota;
	 
		do{
		contador = contador + 1;
		
		printf("digite uma nota: ");
		scanf("%i",&nota);
		fflush(stdin);
		
	} while(nota < 0 || nota > 10);
	
	printf("\nO bloco foi repetido %d vezes", contador);
	printf("\nA nota informada foi: %i \n", nota);
	
	return 0;
}
