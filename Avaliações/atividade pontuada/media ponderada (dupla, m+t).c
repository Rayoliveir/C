#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
    int i, j;
    char disciplinas[3][20];
    float notas[3][3], pesos[3];
    float mediaPonderada[3];
    float nota;
    
    for (i = 0; i < 3; i++) {
        printf("Digite o nome da %d disciplina: ", i+1);
        scanf("%s", disciplinas[i]);

        for (j = 0; j < 3; j++) {
      
            do {
                printf("Digite a nota %d da %s: ", j+1, disciplinas[i]);
                scanf("%f", &nota);
            notas[i][j] = nota;  
            } while (nota < 0 || nota > 10);

        }

        printf("Digite o peso das notas da %s (separados por espaco): ", disciplinas[i]);
        scanf("%f %f %f", &pesos[0], &pesos[1], &pesos[2]);
    }

    for (i = 0; i < 3; i++) {
        mediaPonderada[i] = (notas[i][0] * pesos[0] + notas[i][1] * pesos[1] + notas[i][2] * pesos[2]) / (pesos[0] + pesos[1] + pesos[2]);
    }

    for (i = 0; i < 3; i++) {
        printf("\nA media ponderada da %s eh %.1f\n", disciplinas[i], mediaPonderada[i]);
    }

    return 0;
}
