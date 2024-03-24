/*Faça um programa em C que imprime a tabuada de um
número informado pelo usuário de 1 a 10 utilizando uma
função para exibir o resultado.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void tabuada(int n1){
	int i;
		for(i = 0;i<= 10;i++){
		printf("%d x %d = %d \n", n1, i, n1*i);
	}
}
int main(){
	setlocale(LC_ALL, "");
	int algoritmo, mostrar;
	
	printf("\ninforme um número: ");
	scanf("%i",&algoritmo);
	
	tabuada(algoritmo);
	
	return 0;
}
