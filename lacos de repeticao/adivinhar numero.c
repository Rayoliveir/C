/*Implemente um programa que pe�a ao usu�rio para
adivinhar um n�mero entre 1 e 100.
O programa deve continuar pedindo palpites at� que o
usu�rio acerte o n�mero, fornecendo dicas sobre se o
n�mero � maior ou menor.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numeroAdivinhar = rand() % 100 + 1;
    int chute;
    int numChutes = 0;

    printf("Adivinhe um n�mero entre 1 e 100.\n");

    do {
        scanf("%d",&chute);
        numChutes++;
        if (chute < numeroAdivinhar) {
            printf("O n�mero � maior.\n");
        } else if (chute > numeroAdivinhar) {
            printf("O n�mero � menor.\n");
        }
    } while (chute != numeroAdivinhar);

    printf("Parab�ns! Voc� acertou o n�mero em %d tentativas.\n", numChutes);

    return 0;
}
