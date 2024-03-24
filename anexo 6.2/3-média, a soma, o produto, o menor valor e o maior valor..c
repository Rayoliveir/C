#include <stdio.h>
#include <locale.h>
/*3-Elabore um algoritmo para receber dois inteiros como entrada do
teclado e escreva na tela:

A média, a soma, o produto, o menor valor e o maior valor.

Além disso, verifique se os números informados pelo usuário são
iguais.

Usando uma linha para cada resultado.*/
void cabecalho(){
	system("cls || clear");
	printf(" ===SENAI===");
	fflush(stdin);
}
int main(){
	setlocale(LC_ALL, "");
	int num1, num2, menorValor=0, maiorValor=0, soma, produto, media;
	cabecalho();
	printf("\nInforme o primeiro numero: ");
	scanf("%i",&num1);
	printf("\nInforme o segundo numero: ");
	scanf("%i",&num2);
	
	media=(num1+num2)/2;
	soma=num1+num2;
	produto=num1*num2;
	
	if(num1 > num2){
		maiorValor=num1;
		menorValor=num2;
	}
	else{
		maiorValor=num2;
		menorValor=num1;
	}
	
	printf("\nSoma: %i", soma);
	printf("\nProduto: %i", produto);
	printf("\nMedia: %i", media);
	printf("\nMenor Valor: %i", menorValor);
	printf("\nMaior Valor: %i", maiorValor);
	
	if(num1 == num2){
		printf("\nNumeros iguais!");
	}
	else{
		printf("\nNumeros diferentes");
	}
	
	return 0;
}
