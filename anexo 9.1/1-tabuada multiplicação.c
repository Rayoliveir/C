#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*1-escreva um algoritmo que solicite do usuario um numero 
e mostre a tabuada de multiplicacao do numero informado*/

int main(){
	int i, numero;
	
	printf("Informe um numero: ");
	scanf("%d",&numero);
	
	for(i = 0;i<= 10;i++){
		printf("%d x %d = %d \n",numero, i, numero*i);
	}
	
	return 0;
}
