/*escreva um programa que permita 2 notas de um aluno
-informe por meio de uma funcao a media
-informe por meio de uma funcao se a media for maior ou igual a 7,
 o aluno estara aprovado caso contrario o aluno estara reprovado*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

float aprovacaoAluno(float n1, float n2){
	float media;
	
	if(media >= 7){
		printf("aluno aprovado");
	} else {
		printf("aluno reprovado")
	}
}

int main(){
	setlocale(LC_ALL, "");
	int nota1, nota2;
	
	printf("Informe a primeira nota: ");
	scanf("%f",&nota1);
	
	printf("Informe a segunda nota: ");
	scanf("%f",&nota2);
	
	
	return 0;
}
