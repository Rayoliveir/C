/*Crie uma fun��o em linguagem C que receba 2 n�meros e
usando uma fun��o, mostre uma mensagem com a m�dia
destes dois n�meros informados.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcularMedia(float num1, float num2) {
    return (num1 + num2) / 2;
}

int main() {
	setlocale(LC_ALL, "");
    float primeiroNumero, segundoNumero;

    printf("Informe o primeiro n�mero: ");
    scanf("%f", &primeiroNumero);

    printf("informe o segundo n�mero: ");
    scanf("%f", &segundoNumero);

    printf("M�dia: %.1f\n", calcularMedia(primeiroNumero, segundoNumero));

    return 0;
}
