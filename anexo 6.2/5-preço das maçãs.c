/*5-Elabore um algoritmo para resolver a seguinte questão:

As maçãs custam R$ 1,30 cada se forem compradas menos de uma
dúzia, e R$ 1,00 se forem compradas pelo menos 12.

Escreva um programa que leia o número de maçãs compradas,
calcule e escreva o custo total da compra.*/
#include <stdio.h>
#include <locale.h>

void cabecalho(){
	system("cls || clear");
	printf(" ===SENAI===");
	fflush(stdin);
}
int main(){
	setlocale(LC_ALL, "");
	float precoMaca, valorTotalComprado;
	int qtdMacaComprada;
	
	//tabela
	printf("===TABELA DA MA??===");
	printf("\nQUANTIDADE | PRE?O");
	printf("\nmais de 12 | $1,00");
	printf("\nmenos de 12| $1,30");
	
	printf("\n\nInforme a quantidade de ma??s compradas: ");
	scanf("%i",&qtdMacaComprada);
	
	if(qtdMacaComprada > 12){
		precoMaca=1,00;
	}
	else{
		precoMaca=1,30;
	}
	
	valorTotalComprado=qtdMacaComprada*precoMaca;
	
	printf("\n\nQuantidade de ma??s compradas: %i", qtdMacaComprada);
	printf("\nValor unitario da ma??:$ %.1f", precoMaca);
	printf("\nValor total comprado:$ %.1f", valorTotalComprado);
	
	return 0;

}
