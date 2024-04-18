/*Crie um programa em C que solicite ao usuário:
- Nome
- Idade
- E-mail
- Telefone
Usando o switch-case, mostre o menu abaixo e utilizando funções mostre para o usuário os dados 
solicitados conforme a opção desejada:
1 - Mostrar nome e idade;
2 - Mostrar nome e e-mail;
3 - Mostrar nome e telefone;
4 - Mostrar todas as informações;
0 - Sair do programa.
Caso o usuário informe um número que não esteja no menu acima, siga os seguintes passo:
- Será exibida a mensagem: "Opção incorreta, tente novamente."
- Limpe a tela e mostre o menu novamente para o usuário.

Para sair do programa, o usuário deve digitar o número zero, caso contrário, 
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
	printf("\n*****TABELA DE OPÇÕES*****");
	printf("\n1 - Mostrar nome e idade");
	printf("\n2 - Mostrar nome e e-mail");
	printf("\n3 - Mostrar nome e telefone");
	printf("\n4 - Mostrar todas as informações");
	printf("\n0 - Sair do programa");
	
	printf("\n\nInforme a opção desejada: ");
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
		printf("\nOpção incorreta, tente novamente");
		printf("\n");
		printf("\n*****TABELA DE OPÇÕES*****");
		printf("\n1 - Mostrar nome e idade");
		printf("\n2 - Mostrar nome e e-mail");
		printf("\n3 - Mostrar nome e telefone");
		printf("\n4 - Mostrar todas as informações");
		printf("\n0 - Sair do programa");	
		printf("\n\nInforme a opção desejada: ");
		scanf("%i",&opcao);
	}
	
	return 0;
}
