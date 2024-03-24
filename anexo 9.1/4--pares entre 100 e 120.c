#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*2--declarar os numeros pares entre 100 e 120*/

int main(){
	int i, numero;
	
	printf("Lista de n?meros pares: ");
	
	for(i = 100;i<= 120;i++){
		if (i % 2 == 0){
		printf("%d \n",i);	
		}
	}
	return 0;
}
