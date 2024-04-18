/*Crie um programa em C que solicite ao usu�rio:
- Nome
- Idade
- E-mail
- Telefone
Usando o switch-case, mostre o menu abaixo e utilizando fun��es mostre para o usu�rio os dados 
solicitados conforme a op��o desejada:
1 - Mostrar nome e idade;
2 - Mostrar nome e e-mail;
3 - Mostrar nome e telefone;
4 - Mostrar todas as informa��es;
0 - Sair do programa.
Caso o usu�rio informe um n�mero que n�o esteja no menu acima, siga os seguintes passo:
- Ser� exibida a mensagem: "Op��o incorreta, tente novamente."
- Limpe a tela e mostre o menu novamente para o usu�rio.

Para sair do programa, o usu�rio deve digitar o n�mero zero, caso contr�rio, 
o menu deve ser exibido novamente.*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	char nome[50], email[50], telefone[50];
	int idade, opcao;
	
	printf("Informe seu nome: ");
	scanf("%s",&nome);
	printf("Informe sua idade: ");
	scanf("%i",&idade);
	printf("Informe seu e-mail: ");
	scanf("%s",&email);
	printf("Informe seu telefone: ");
	scanf("%s",&telefone);
	
	printf("\n");
	printf("\n*****TABELA DE OP��ES*****");
	printf("\n1 - Mostrar nome e idade");
	printf("\n2 - Mostrar nome e e-mail");
	printf("\n3 - Mostrar nome e telefone");
	printf("\n4 - Mostrar todas as informa��es");
	printf("\n0 - Sair do programa");
	
	printf("\n\nInforme a op��o desejada: ");
	scanf("%i",&opcao);
	
	switch (opcao){
		case 1:
			printf("\nNome: %s", nome);
			printf("\nIdade: %i", idade);
		break;
		case 2:
			printf("\nNome: %s", nome);
			printf("\nE-mail: %s", email);
		break;
		case 3:
			printf("\nNome: %s", nome);
			printf("\ntelefone: %s", telefone);
		break;
		case 4:
			printf("\nNome: %s", nome);
			printf("\nIdade: %i", idade);
			printf("\nE-mail: %s", email);
			printf("\ntelefone: %s", telefone);
		break;
		case 0:
			printf("\nSaindo do programa");
		break;
		default:
		printf("\nOp��o incorreta, tente novamente");
		printf("\n");
		printf("\n*****TABELA DE OP��ES*****");
		printf("\n1 - Mostrar nome e idade");
		printf("\n2 - Mostrar nome e e-mail");
		printf("\n3 - Mostrar nome e telefone");
		printf("\n4 - Mostrar todas as informa��es");
		printf("\n0 - Sair do programa");	
		printf("\n\nInforme a op��o desejada: ");
		scanf("%i",&opcao);
	}
	
	return 0;
}
