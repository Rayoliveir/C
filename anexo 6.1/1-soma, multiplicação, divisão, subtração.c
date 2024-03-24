#include <stdio.h>
/*1- Construa um algoritmo para ler dois números.
Em seguida, calcule a soma, a subtração, a multiplicação e a divisão
desses números, armazenando os resultados em variáveis com os
nomes listados abaixo:
- soma
- subtracao
- multiplicacao
- divisao
Mostre os dados iniciais e as variáveis com os resultados.*/
void cabecalho(){
	system("csl || clear")
	printf(" == INFORMACOES DO USUARIO == ")
}
int main (){
	//declarando variaveis
	int num1, num2;
	int sub, multi, soma, divi;
	
	//solicitando dados
	cabecalho();
	printf("Informe o primeiro numero: \n");
	scanf("%i",&num1);
	cabecalho();
	printf("Informe o segundo numero: \n");
	scanf("%i",&num2);
	
	//calculando dados
	soma=num1+num2;
	sub=num1-num2;
	multi=num1*num2;
	divi=num1/num2;
	
	//exibindo dados
	printf("Primeiro numero: %i \n",num1);
	printf("Segundo numero: %i \n",num2);
	printf("Soma: %i \n",soma);
	printf("Subtracao: %i \n",sub);
	printf("multiplicacao: %i \n",multi);
	printf("divisao: %i \n",divi);
	
	return 0;
}
