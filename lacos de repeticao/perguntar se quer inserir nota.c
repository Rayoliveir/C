/*Escreva um algoritmo que pergunte ao usuário se deseja inserir mais
uma nota, se a resposta do usuário for “N”, o programa fará a média
aritmética das notas informadas e mostrará a média aritmética para o
usuário.

Obs.: Use um contador dentro do laço de repetição para contar a
quantidade de iterações (loops).*/

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

