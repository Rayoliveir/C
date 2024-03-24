/*Crie um programa que solicite ao usuário seu login e
uma senha.
O programa deve continuar pedindo o login e a senha
até que ambos estejam corretos.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "");
	
	char login[50]; 
	char senha[50];
	char loginCorreto[50] = "usuario";
	char senhaCorreta[50] = "senha";
	
	printf("Login: ");
	scanf("%s",&login);
	
	printf("Senha: ");
	scanf("%s",&senha);
	
	while (strcmp(login, loginCorreto) != 0 || strcmp(senha, senhaCorreta) != 0) {
        printf("Login ou senha incorretos. Tente novamente.\n");
        printf("Digite seu login: ");
        scanf("%s",&login);

        printf("Digite sua senha: ");
        scanf("%s",&senha);
    }

    printf("Login e senha corretos.\n");

    return 0;
}
