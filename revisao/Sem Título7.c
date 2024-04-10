#include <stdio.h>
#include <stdlib.h>

float calcula_media_ponderada(char *nome_disciplina, float nota1, float peso1, float nota2, float peso2, float nota3, float peso3) {
    float media_ponderada1 = nota1 * peso1;
    float media_ponderada2 = nota2 * peso2;
    float media_ponderada3 = nota3 * peso3;
    float total_peso = peso1 + peso2 + peso3;
    float media_ponderada = (media_ponderada1 + media_ponderada2 + media_ponderada3) / total_peso;
    return media_ponderada;
}

int main() {
    char nome_disciplina[50];
    float notas[3];
    float pesos[3];
    float media_ponderada;

    printf("Nome da disciplina: ");
    scanf("%s", nome_disciplina);

    for (int i = 0; i < 3; i++) {
        printf(i == 0 ? "1a nota: " : i == 1 ? "2a nota: " : "3a nota: ");
        scanf("%f", &notas[i]);

        printf(i == 0 ? "peso: " : i == 1 ? "peso: " : "peso: ");
        scanf("%f", &pesos[i]);
    }

    media_ponderada = calcula_media_ponderada(nome_disciplina, notas[0], pesos[0], notas[1], pesos[1], notas[2], pesos[2]);
    printf("Média: %.1f\n", media_ponderada);

    return 0;
}
