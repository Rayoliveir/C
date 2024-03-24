//tabuada multiplicação

/*Escreva um algoritmo que solicite do usu?rio um n?mero e mostre
a tabuada de multiplica??o do n?mero informado.
Exemplo:
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
...
5 x 10 = 50*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	int i, numero;

	printf("Informe um numero: ");
	scanf("%d",&numero);

	for(i = 0;i<= 10;i++){
		printf("%d x %d = %d \n",numero, i, numero*i);
	}

	return 0;
}
