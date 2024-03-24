/*Crie um programa que solicite ao usu�rio seu login e
uma senha
O programa deve continuar pedindo o login e a senha
at� que ambos estejam corretos.
O programa deve solicitar o login e senha apenas tr�s
vezes. Caso ultrapasse o n�mero de tentativas, o
programa deve ser finalizado.*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char login[50];
    char senha[50];
    char loginCorreto[50] = "usuario";
    char senhaCorreta[50] = "senha";
    int tentativas = 0;

    printf("Digite seu login: ");
    scanf("%s",&login);

    printf("Digite sua senha: ");
    scanf("%s",&senha);

    while (strcmp(login, loginCorreto) != 0 || strcmp(senha, senhaCorreta) != 0 && tentativas < 3) {
        tentativas++;
        if (tentativas < 3) {
            printf("Login ou senha incorretos. Tente novamente.\n");
            printf("Digite seu login: ");
            scanf("%s",&login);

            printf("Digite sua senha: ");
            scanf("%s",&senha);
        } else {
            printf("Voc� excedeu o limite de tentativas. O programa ser� encerrado.\n");
            break;
        }
    }

    if (tentativas < 3) {
        printf("Login e senha corretos.\n");
    }

    return 0;
}
