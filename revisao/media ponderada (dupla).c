#include <stdio.h>

int main() {
    int i, j;
    char disciplinas[3][20];
    float notas[3][3], pesos[3];
    float mediaPonderada[3];

    // Entrada de dados
    for (i = 0; i < 3; i++) {
        printf("Digite o nome da %d disciplina: ", i+1);
        scanf("%s", disciplinas[i]);
	do{
        for (j = 0; j < 3; j++) {
            printf("Digite a nota %d da %s: ", j+1, disciplinas[i]);
            scanf("%f", &notas[i][j]);
        }

        printf("Digite o peso das notas da %s (separados por espaco): ", disciplinas[i]);
        scanf("%f %f %f", &pesos[i], &pesos[i], &pesos[i]);
    }while (notas[i][j] < 0 || notas[i][j] > 10);
}

    // Calculo da media ponderada
    for (i = 0; i < 3; i++) {
        mediaPonderada[i] = (notas[i][0] * pesos[i] + notas[i][1] * pesos[i] + notas[i][2] * pesos[i]) / (pesos[i] + pesos[i] + pesos[i]);
    }

    // Exibicao da media ponderada
    for (i = 0; i < 3; i++) {
        printf("\nA media ponderada da %s eh %.2f\n", disciplinas[i], mediaPonderada[i]);
    }

    return 0;
}
