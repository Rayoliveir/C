/*Crie um algoritmo que leia 5 números inteiros e, em
seguida, mostre na tela:

1.A quantidade de números pares e ímpares;
2.A quantidade de números positivos e negativos;
3.A quantidade de números inseridos.*/

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

    printf("Digite 5 números inteiros:\n");
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

    printf("\nA quantidade de números pares é: %d", qtdPares);
    printf("\nA quantidade de números ímpares é: %d", qtdImpares);
    printf("\nA quantidade de números positivos é: %d", qtdPositivos);
    printf("\nA quantidade de números negativos é: %d", qtdNegativos);
    printf("\nA quantidade de números inseridos é: 5\n");

    return 0;
}
