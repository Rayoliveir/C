#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//inicializando função void
float calcularMedia(float n1, float n2){
	float media;
	media = (n1 + n2) /2;
	return media;
}
//inicializando função void
int main(){
	setlocale(LC_ALL, "");
	
	//declarando variaveis
	float primeiroNumero, segundoNumero, media;
	
	//solicitando dados
	printf("Digite o primeiro numero: ");
	scanf("%i",&primeiroNumero);
	
	printf("Digite o segundo numero: ");
	scanf("%i",&segundoNumero);
	
	//somando com a função void
	media = calcularMedia(primeiroNumero, segundoNumero);
	
	printf("\nMédia: %.1f", media);
	
	return 0;
}
