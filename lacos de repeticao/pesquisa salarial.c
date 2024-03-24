/*Foi feita uma pesquisa entre os habitantes de uma região.
Foram coletados os dados de idade, sexo (M/F) e salário.
Faça um algoritmo que informe:

a) a média de salário do grupo;
b) maior e menor idade do grupo;
c) quantidade de mulheres com salário a partir de R$ 5.000,00.

Crie um menu com duas opções.

Código | Descrição
1 | Adicionar pessoa
2 | Exibir resultados e sair

O final da leitura de dados se dará com quando o usuário digitar o número código 2.*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <limits.h>

int main(){
	setlocale(LC_ALL,"");
	int idade, opcao, maiorIdade = INT_MIN, menorIdade = INT_MAX;
	int qtdSalario = 0, mulheres5k = 0;
	char sexo;
	float salario, somaSalario = 0, mediaSalarial;
	
	do{
		fflush(stdin);
		printf("Código \t Descrição \n");
		printf("1 \t Adcionar pessoa \n");
		printf("2 \t Exibir resutados e sair \n");
		printf("Digite a opção desejada: ");
		scanf("%i",&opcao);
	
		switch(opcao){
			case 1:
				printf("digite sua idade: ");
				scanf("%i",&idade);
				fflush(stdin);
				printf("Digite o sexo: ");
				scanf("%c",&sexo);
				fflush(stdin);
				printf("Digite seu salario: ");
				scanf("f",&salario);
				
				sexo = toupper(sexo);
				
				if(idade > maiorIdade){
					maiorIdade = idade;
				}
				
				if(idade < menorIdade){
					menorIdade = idade;
				}
				
				qtdSalario++;
				somaSalario += salario;
				
				if(sexo == 'F' && salario >= 5000){
					mulheres5k++;
				}
				break;
			
			case 2:
				mediaSalarial = somaSalario / qtdSalario;
				
				printf("\n=== Exibindo resultados ===\n");
				printf("Média salarial do grupo: R$ %.2f \n", mediaSalarial);
				printf("Maior Idade: %i \n", maiorIdade);
				printf("Menor idade: %i \n", menorIdade);
				printf("Quantidade d emulheres com salario acima de 5k: %", mulheres5k);
				break;
			
			default:
				printf("Opção Inválida. \n");
		}
	}while(opcao != 2);

	return 0;
	
}
