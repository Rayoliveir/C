/*Fa�a um algoritmo que leia uma quantidade n�o
determinada de n�meros inteiros positivos. Calcule:
a) quantidade de n�meros pares e �mpares;
b) m�dia de valores pares
c) m�dia geral dos n�meros lidos.

O n�mero que encerrar� a leitura ser� o n�mero zero.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "");
	
	//declarando variaveis
	int pares = 0, impares = 0, somaPares = 0, somaImpares = 0;
	int contadorImpares = 0, valor, contadorPares = 0;
	float mediaPares = 0, mediaImpares = 0, mediaGeral = 0;
	
	//solicitando dados
	printf("Informe um numero: ");
	scanf("%i",&valor);
	
	//while repeti��o
	while(valor != 0){	
		if(valor > 0){
			if(valor % 2 == 0){
				pares++;
				somaPares += valor;
				contadorPares++;
			} else{
				impares++;
				somaImpares += valor;
				contadorImpares++;
				}
		}
		
		printf("Informe um numero: ");
		scanf("%i",&valor);
	}
		
	if(pares > 0){
        mediaPares = somaPares / (float) pares;
    }
    
    if(impares > 0){
        mediaImpares = somaImpares / (float) impares;
    }
    
    if(pares + impares > 0){
        mediaGeral = (somaPares + somaImpares) / (float) (pares + impares);
    }
		
	printf("\nQuantidade de pares: %i", pares);
    printf("\nQuantidade de impares: %i", impares);
    printf("\nM�dia pares: %.2f", mediaPares);
    printf("\nM�dia impares: %.2f", mediaImpares);
    printf("\nM�dia geral: %.2f", mediaGeral);
	
	return 0;
}
