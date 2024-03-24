/*Escreva um algoritmo que solicite duas notas para um aluno.
Caso seja menor que 0 ou maior que 10, mostre a pergunta
novamente.
Calcule e mostre a média aritmética do aluno.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float media, nota, soma;
	int i;
	
	for (i=1;i<=2;i++){
	
		do{
			printf("Digite a %iª nota: ", i);
			scanf("%f",&nota);
	} while(nota < 0 || nota > 10);
	
	soma = soma + nota;
}

	media = soma/2;
	
	printf("\nMédia: %.1f", media);
	
	return 0;
}
