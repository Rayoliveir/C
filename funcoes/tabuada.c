#include <stdio.h>

void escrResultado(int numero, int resultado) {
    printf("%d x %d = %d\n", numero, resultado, numero * resultado);
}

void escrTabuada(int numero) {
    for (int i = 1; i <= 10; i++) {
        escrResultado(numero, i);
    }
}

int main() {
    int number;

    printf("Digite um número para exibir a tabuada: ");
    scanf("%d", &number);

    printf("\nTabuada de %d:\n", number);
    printTabuada(number);

    return 0;
}
