#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//inicializando função void
int somar(int n1, int n2){
	//variaveis
	int soma;
	//somando dados
	soma = n1 + n2;
	return soma;
}
//inicializando função void
int main(){
	setlocale(LC_ALL, "");

	//declarando variaveis
	int primeiroNumero, segundoNumero, soma;

	//solicitando dados
	printf("Digite o primeiro numero: ");
	scanf("%i",&primeiroNumero);

	printf("Digite o segundo numero: ");
	scanf("%i",&segundoNumero);

	//somando com a função void
	soma = somar(primeiroNumero, segundoNumero);

	printf("\nSoma: %i \n", soma);

	return 0;
}
