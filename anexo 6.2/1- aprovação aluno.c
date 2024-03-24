#include <stdio.h>
#include <locale.h>
/*1-Elabore um algoritmo para ler o nome de um aluno, sua idade e
as três notas. Calcular a média do aluno.

Caso a média do aluno seja menor que 7, o aluno está reprovado.

Mostrar: nome, idade, média e se está aprovado ou reprovado.*/
void cabecalho(){
	system("cls || clear");
	printf(" ===SENAI===");
	fflush(stdin);
}
int main(){
	setlocale(LC_ALL, "");
	//declarando variaveis
	char nomeAluno[50];
	int idade;
	float nota1, nota2, nota3, media;
	
	//solicitando dados
	cabecalho();
	printf("\nInforme o nome do aluno: ");
	scanf("%s",&nomeAluno);
	
	cabecalho();
	printf("\nInforme a idade do aluno: ");
	scanf("%i",&idade);
	
	cabecalho();
	printf("\nInforme a primeira nota: ");
	scanf("%f",&nota1);
	
	cabecalho();
	printf("\nInforme a segunda nota: ");
	scanf("%f",&nota2);
	
	cabecalho();
	printf("\nInforme a terceira nota: ");
	scanf("%f",&nota3);
	
	//calculos
	media=(nota1+nota2+nota3)/3;
	
	//exibindo dados
	printf("\nNome: %s", nomeAluno);
	printf("\nIdade: %i", idade);
	printf("\nPrimeira nota: %.1f", nota1);
	printf("\nSegunda nota: %.1f", nota2);
	printf("\nTerceira nota %.1f", nota3);
	printf("\nMedia: %.1f", media);
	
	//if-else
	if(media < 7){
		printf("\nAluno reprovado!");
	}
	else{
		printf("\nAluno aprovado!");
	}
	
	return 0;	
}
