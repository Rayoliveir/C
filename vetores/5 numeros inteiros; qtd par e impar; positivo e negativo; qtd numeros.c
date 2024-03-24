/*Crie um algoritmo que leia 5 n�meros inteiros e, em
seguida, mostre na tela:

1.A quantidade de n�meros pares e �mpares;
2.A quantidade de n�meros positivos e negativos;
3.A quantidade de n�meros inseridos.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

int main() {
	setlocale(LC_ALL,"");
    int numeros[5];
    int i, qtdPares = 0, qtdImpares = 0, qtdPositivos = 0, qtdNegativos = 0;

    printf("Digite 5 n�meros inteiros:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 == 0) {
            qtdPares++;
        } else {
            qtdImpares++;
        }
        if (numeros[i] > 0) {
            qtdPositivos++;
        } else if (numeros[i] < 0) {
            qtdNegativos++;
        }
    }

    printf("\nA quantidade de n�meros pares �: %d", qtdPares);
    printf("\nA quantidade de n�meros �mpares �: %d", qtdImpares);
    printf("\nA quantidade de n�meros positivos �: %d", qtdPositivos);
    printf("\nA quantidade de n�meros negativos �: %d", qtdNegativos);
    printf("\nA quantidade de n�meros inseridos �: 5\n");

    return 0;
}
