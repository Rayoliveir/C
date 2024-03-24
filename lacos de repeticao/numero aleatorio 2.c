#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int geraNumeroAleatorio(int limite) {
    srand(time(NULL));
    return rand() % limite + 1;
}

void adivinhaNumero(int numeroSorteado) {
    int numeroDigitado, tentativas = 0;

    do {
        printf("Tente adivinhar o numero entre 1 e 100: ");
        scanf("%d", &numeroDigitado);
        tentativas++;

        if (numeroDigitado > numeroSorteado) {
            printf("O numero sorteado eh menor!\n");
        } else if (numeroDigitado < numeroSorteado) {
            printf("O numero sorteado eh maior!\n");
        }

    } while (numeroDigitado != numeroSorteado);

    printf("Parabens! Voce acertou o numero em %d tentativas!\n", tentativas);
}

int main() {
    int numeroSorteado = geraNumeroAleatorio(100);
    adivinhaNumero(numeroSorteado);

    return 0;
}
