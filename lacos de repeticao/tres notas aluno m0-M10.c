/*Escreva um algoritmo que leia três notas de um aluno.
Caso seja menor que 0 ou maior que 10, mostre a pergunta
novamente.
Após receber as notas dentro dos parâmetros acima, calcule a média e
verifique se o aluno está aprovado, recuperação ou reprovado
considerando os seguintes critérios:
Se a média for a partir de 7, aprovado;
Se a média for entre 5 e 6,9, o aluno está em recuperação;
Caso seja menor que 5, o aluno está reprovado.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float media, nota, soma;
	int i;
	
	for (i=1;i<=3;i++){
			
		do{
			printf("Digite a %iª nota: ", i);
			scanf("%f",&nota);
	} while(nota < 0 || nota > 10);
	soma = soma + nota;
}
	media = soma/3;
	
	if(media >= 7){
		printf("\nAprovado");
	} else if(media >= 5){
		printf("\nRecuperação");
	} else{
		printf("\nReprovado");
	}
	
	return 0;
}
