#include <stdio.h>
/*5 - Faça um algoritmo que solicite do usuario o valor do
salario de um usuario, calcule quantos salarios
minimos esse usuario ganha e imprima na tela o
resultado.

(Base para o salario minimo R$ 1.412,00).*/
int main(){
	//declarando variaveis
	char nome[50];
	float salario, valorTotalRecebido;
	int quantidadeSalarioMinimo;
	float salarioMinimo;
	
	//solicitando dados
	printf("Informe o seu nome: ");
	scanf("%s",&nome);
	
	printf("Informe seu salario: ");
	scanf("%f",&salario);
	
	//calculo
	salarioMinimo = 1.412,00;
	quantidadeSalarioMinimo = salario / salarioMinimo;
	valorTotalRecebido = salarioMinimo * quantidadeSalarioMinimo;
		
	//exibindo
	printf("\n\nNome: %s",nome);
	printf("\nSalario minimo: %f",salarioMinimo);
	printf("\nSalario Recebido: %f",salario);
	printf("\nQuantidade de salarios recebidos: %i",quantidadeSalarioMinimo);
	printf("\nValor total recebido: %f",valorTotalRecebido);
	
	return 0;
}
