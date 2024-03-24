#include <stdio.h>
/*2- Elabore um algoritmo que solicita do usuário: o nome de um aluno,
sua idade e quatro notas.

Calcule a média aritmética do aluno armazenando o resultado em
uma variável.

Mostre na tela: nome, idade, notas e média.*/
int main(){
	//declarando variaveis
	char nomeAluno[50];
	int idade;
	float nota1, nota2, nota3, nota4, media;
	
	//solicitando dados
	printf("Informe o nome do aluno: ");
	scanf("%s",&nomeAluno);
	
	printf("Informe a idade do aluno: ");
	scanf("%i",&idade);
	
	printf("informe a primeira nota: ");
	scanf("%f",&nota1);
	
	printf("Informe a segunda nota: ");
	scanf("%f",&nota2);
	
	printf("Informe a terceira nota: ");
	scanf("%f",&nota3);
	
	printf("Informe a quarta nota: ");
	scanf("%f",&nota4);
	
	//calculando media
	media=(nota1+nota2+nota3+nota4)/4;
	
	//exibindo dados
	printf("\n\nNome do aluno: %s",nomeAluno);
	printf("\nIdade do aluno: %i \n",idade);
	printf("Primeira nota: %f \n",nota1);
	printf("Segunda nota: %f \n",nota2);
	printf("Terceira nota: %f \n",nota3);
	printf("Quarta nota: %f \n",nota4);
	printf("Media do aluno: %f \n",media);
	
	return 0;
}
