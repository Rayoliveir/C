/*Escreva um algoritmo que pergunte ao usu�rio se deseja inserir mais
uma nota, se a resposta do usu�rio for �N�, o programa far� a m�dia
aritm�tica das notas informadas e mostrar� a m�dia aritm�tica para o
usu�rio.

Obs.: Use um contador dentro do la�o de repeti��o para contar a
quantidade de itera��es (loops).*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");

    float nota, soma = 0, media;
    int contador = 0, resposta;
    
    printf("Digite a nota: ");
    scanf("%f",&nota);

    do {
        printf("Deseja inserir mais uma nota? (1 - sim / 0 - nao): ");
        scanf("%d", &resposta);

        if (resposta == 1){
            printf("Digite a nota: ");
            scanf("%f", &nota);

            soma += nota;
            contador++;
        }
    } while (resposta != 0);

    media = soma / contador;
    printf("A media aritmetica das notas e: %.1f\n", media);

    return 0;
}

