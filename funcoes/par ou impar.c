/*crie uma fun��o em linguagem c que receba um numero 
e mostre uma mensgem informando se ele � impar ou par*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void parOuImpar(int numero){
	if (numero % 2 == 0){
		printf("\nN�mero par!");
	} else{
		printf("\nN�mero impar!");
	}
}

int main(){
	setlocale(LC_ALL, "");
	int numero;
	
	printf("Informe um n�mero: ");
	scanf("%i",&numero);
	
	printf("\n===RESULTADO===");
	parOuImpar(numero);
	
	return 0;
}
