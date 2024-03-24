/*Faça um algoritmo que leia uma quantidade não
determinada de números inteiros positivos. Calcule:
a) quantidade de números pares e ímpares;
b) média de valores pares
c) média geral dos números lidos.

O número que encerrará a leitura será o número zero.*/

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
	
	//while repetição
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
    printf("\nMédia pares: %.2f", mediaPares);
    printf("\nMédia impares: %.2f", mediaImpares);
    printf("\nMédia geral: %.2f", mediaGeral);
	
	return 0;
}
