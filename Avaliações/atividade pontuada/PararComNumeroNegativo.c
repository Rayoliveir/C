/*Construa um algoritmo que calcule a m�dia aritm�tica de v�rios
n�meros inteiros positivos, inseridos pelo usu�rio.
O final da leitura acontecer� quando for lido um n�mero negativo.
Mostre a m�dia aritm�tica dos n�meros informados pelo usu�rio.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int numeros, contador = 0;
	float soma = 0, media;
	
	printf("Insira um numero inteiro: ");
	scanf("%i",&numeros);	
	
	while(1){
		printf("Insira um numero inteiro: ");
		scanf("%i",&numeros);
		
			
			if(numeros < 0){
				break;
			}
	
			soma += numeros;
			contador++;
		
	}
	
	media = soma/contador;
	
	printf("\nSoma: %i", soma);
	printf("\nM�dia: %i", media);
	
	return 0;
}
