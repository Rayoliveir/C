/*Utilizando vetores, crie um programa que leia o nome de um aluno, 4 notas e calcule a
m�dia aritm�tica.
Verifique a situa��o do aluno considerando:
- M�dia igual ou maior que 7,0: Aprovado.
- M�dia entre 5,0 e 6,9: Recupera��o.
- M�dia menor que 5,0: Reprovado.
Mostre os dados do aluno como: nome, suas 4 notas, m�dia e situa��o conforme
solicitado acima.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int i;
	char nome[50];
	float nota[4], media, soma = 0;
	
	printf("Informe o nome do aluno: ");
	scanf("%s",&nome);
	
	for(i = 0;i < 4;i++){
		printf("Informe a %i� nota: ", i + 1);
		scanf("%f",&nota[i]);
		
		soma = soma + nota[i];
	}
	
	media = soma/i;
	
	printf("\nNome: %s", nome);
	
	for(i = 0;i < 4;i++){
		printf("\n%i nota: %.1f",i + 1, nota[i]);
	}
	
	printf("\nM�dia: %.1f", media);
	
	if(nota[i] > 7){
		printf("\nAprovado");
	}else if(nota[i] > 5){
		printf("\nRecupera��o");
	}else{
		printf("\nReprovado");
	}
	
	return 0;
}
