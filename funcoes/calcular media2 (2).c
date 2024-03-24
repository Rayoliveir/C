/*Crie uma função em linguagem C que receba 2 números e
usando uma função, mostre uma mensagem com a média
destes dois números informados.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcularMedia(float num1, float num2) {
    return (num1 + num2) / 2;
}

int main() {
	setlocale(LC_ALL, "");
    float primeiroNumero, segundoNumero;

    printf("Informe o primeiro número: ");
    scanf("%f", &primeiroNumero);

    printf("informe o segundo número: ");
    scanf("%f", &segundoNumero);

    printf("Média: %.1f\n", calcularMedia(primeiroNumero, segundoNumero));

    return 0;
}
