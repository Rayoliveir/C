/*Escreva um algoritmo que leia tr�s notas de um aluno.
Caso seja menor que 0 ou maior que 10, mostre a pergunta
novamente.
Ap�s receber as notas dentro dos par�metros acima, calcule a m�dia e
verifique se o aluno est� aprovado, recupera��o ou reprovado
considerando os seguintes crit�rios:
Se a m�dia for a partir de 7, aprovado;
Se a m�dia for entre 5 e 6,9, o aluno est� em recupera��o;
Caso seja menor que 5, o aluno est� reprovado.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float media, nota, soma;
	int i;
	
	for (i=1;i<=3;i++){
			
		do{
			printf("Digite a %i� nota: ", i);
			scanf("%f",&nota);
	} while(nota < 0 || nota > 10);
	soma = soma + nota;
}
	media = soma/3;
	
	if(media >= 7){
		printf("\nAprovado");
	} else if(media >= 5){
		printf("\nRecupera��o");
	} else{
		printf("\nReprovado");
	}
	
	return 0;
}
