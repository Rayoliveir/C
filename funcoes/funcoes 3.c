#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//inicializando fun��o void
float calcularMedia(float n1, float n2){
	float media;
	media = (n1 + n2) /2;
	return media;
}
//inicializando fun��o void
int main(){
	setlocale(LC_ALL, "");
	
	//declarando variaveis
	float primeiroNumero, segundoNumero, media;
	
	//solicitando dados
	printf("Digite o primeiro numero: ");
	scanf("%i",&primeiroNumero);
	
	printf("Digite o segundo numero: ");
	scanf("%i",&segundoNumero);
	
	//somando com a fun��o void
	media = calcularMedia(primeiroNumero, segundoNumero);
	
	printf("\nM�dia: %.1f", media);
	
	return 0;
}
