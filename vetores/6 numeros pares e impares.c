/*
-crie um programa que leia 6 numeros
-armazenando em um vetor 
-informe quantos s�o pares e quantos s�o impares
*/

/*
#define SIZE (valor requerido) //VR fora dos parenteses
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

int main(){
	setlocale(LC_ALL,"");
	int numeros[6];
	int i;
	int par, impar;
	
	for(i = 0;i < 6;i++){
		printf("informe o %i� n�mero: ", i + 1);
		scanf("%i",&numeros[i]);
		
		if(numeros[i] % 2 ==0){
			par++;
		} else {
			impar++;
		}
	}
	
	for(i = 0;i < 6;i++){
		printf("\n\nN�mero Informado: %i ",numeros[i]);
	}
	
	printf("\nNumeros impares: %i", impar);
	printf("\nNumeros pares: %i", par);
	
	return 0;
}
