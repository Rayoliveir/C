/*Solicite um valor em metros e por meio de uma função
retorna o correspondente em centrimetros*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


float conversor(float numero){
	float conversao;
	conversao = numero * 100;
	return conversao;
}

int main(){
	setlocale(LC_ALL, "");
	float metros, resultado;
	
	printf("Informe o valor em metros: ");
	scanf("%f",&metros);
	
	resultado = conversor(metros);
	
	printf("\nResultado: %.1f cm \n", resultado);
	
	return 0;
}
