/*Crie um algoritmo que aceite apenas 6 valores
inteiros, positivos e pares, em seguida, mostre
na tela os valores lidos na ordem inversa*/

#include <stdio.h>

int main() {
    int valores[6];
    int i;

    printf("Digite 6 valores inteiros positivos e pares:\n");
    for (i = 0; i < 6; i++) {
        do {
            scanf("%d", &valores[i]);
        } while (valores[i] < 0 || valores[i] % 2 != 0);
    }

    printf("\nValores lidos na ordem inversa:\n");
    for (i = 5; i >= 0; i--) {
        printf("%d\n", valores[i]);
    }

    return 0;
}
