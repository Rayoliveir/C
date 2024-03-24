//qtd par e impar

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	//declarando variaveis
	int i, numero, pares = 0, impares = 0;
	
	//solicitando dados
	for (i = 1; i <= 5; i++){
		printf("Digite o %i? numero: ", i);
		scanf("%i",&numero);
		
		if(numero % 2 ==0){
			pares++;
		} else {
			impares++;
		}
		
	}
		//exibindo dados
		printf("Quantidade de pares: %i \n", pares);
		printf("Quantidade de impares %i \n", impares);
		
	return 0;
}
