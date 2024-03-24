/*Implemente um programa que peça ao usuário para
adivinhar um número entre 1 e 100.
O programa deve continuar pedindo palpites até que o
usuário acerte o número, fornecendo dicas sobre se o
número é maior ou menor.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numeroAdivinhar = rand() % 100 + 1;
    int chute;
    int numChutes = 0;

    printf("Adivinhe um número entre 1 e 100.\n");

    do {
        scanf("%d",&chute);
        numChutes++;
        if (chute < numeroAdivinhar) {
            printf("O número é maior.\n");
        } else if (chute > numeroAdivinhar) {
            printf("O número é menor.\n");
        }
    } while (chute != numeroAdivinhar);

    printf("Parabéns! Você acertou o número em %d tentativas.\n", numChutes);

    return 0;
}
