/*4-Elabore um algoritmo usando opera��es l�gicas para informar se
uma pessoa � obrigada a votar.

Considere que a regra � que menores de 18 e maiores que 65 n�o
s�o obrigados a votar.*/
#include <stdio.h>
#include <locale.h>

void cabecalho(){
	system("cls || clear");
	printf(" ===SENAI===");
	fflush(stdin);
}
int main(){
	setlocale(LC_ALL, "");
	int idade;
	
	cabecalho();
	printf("Identifique-se com a idade: ");
	scanf("%i",&idade);
	
	if(idade>=18&&idade<=65){
		printf("? obrigatorio votar");
	}
	else{
		printf("N?o ? obrigatorio votar");
	}
	return 0;
}
