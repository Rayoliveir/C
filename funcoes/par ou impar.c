/*crie uma função em linguagem c que receba um numero 
e mostre uma mensgem informando se ele é impar ou par*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void parOuImpar(int numero){
	if (numero % 2 == 0){
		printf("\nNúmero par!");
	} else{
		printf("\nNúmero impar!");
	}
}

int main(){
	setlocale(LC_ALL, "");
	int numero;
	
	printf("Informe um número: ");
	scanf("%i",&numero);
	
	printf("\n===RESULTADO===");
	parOuImpar(numero);
	
	return 0;
}
