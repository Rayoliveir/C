#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/*2-Elabore um algoritmo para receber o login e senha de um usu�rio.

Caso o usu�rio e senha estejam corretos, mostre a mensagem �Bem-
vindo!�, caso contr�rio, mostre a mensagem �Login ou senha

inv�lidos."*/
void cabecalho(){
	system("cls || clear");
	printf(" ===SENAI===");
	fflush(stdin);
}
int main(){
	setlocale(LC_ALL, "");
	//declarando variaeis
	char login[50], senha[50];
	char loginCadastrado[50]="Maria", senhaCadastrada[50]="12345";
	
	//solicitando dados
	cabecalho();
	printf("\nLogin: ");
	scanf("%s",&login);
	printf("\nSenha: ");
	scanf("%s",&senha);

	//if-else
	cabecalho();
	if(strcmp(login, loginCadastrado)==0 && strcmp(senha,senhaCadastrada)==0){
		printf("\nBem Vindo!"); 
	} else{
		printf("\nLogin ou senha Incorretos.");
	}
	return 0;
}
