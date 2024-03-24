/*4-Elabore um algoritmo usando operações lógicas para informar se
uma pessoa é obrigada a votar.

Considere que a regra é que menores de 18 e maiores que 65 não
são obrigados a votar.*/
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
