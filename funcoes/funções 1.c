#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//inicializando fun��o void
void somar(int n1, int n2){
	//variaveis
	int soma;
	//somando dados
	soma=n1+n2;
	//exibindo dados
	printf("\nSoma: %i \n", soma);
}
//inicializando fun��o void
int main(){
	setlocale(LC_ALL, "");
	
	//declarando variaveis
	int primeiroNumero, segundoNumero;
	
	//solicitando dados
	printf("Digite o primeiro numero: ");
	scanf("%i",&primeiroNumero);
	
	printf("Digite o segundo numero: ");
	scanf("%i",&segundoNumero);
	
	//somando com a fun��o void
	somar(primeiroNumero, segundoNumero);
	
	return 0;
}
