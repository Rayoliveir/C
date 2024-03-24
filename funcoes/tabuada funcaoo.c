/*Faça um programa em C que imprime a tabuada de um
número informado pelo usuário de 1 a 10 utilizando uma
função para exibir o resultado.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void escrResultado(int numero, int resultado) {
    printf("%d x %d = %d\n", numero, resultado, numero * resultado);
}
int main(){
	int i, numero;

	printf("Informe um numero: ");
	scanf("%d",&numero);

	for(i = 0;i<= 10;i++){
		printf("%d x %d = %d \n",numero, i, numero*i);
	}

	return 0;
}
