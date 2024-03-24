#include <stdio.h>
/*6 - faça um algoritmo que solicite do usuario um valor 
qualquer e mostre na tela com um reajuste de 10%
*/
int main (){
	//declarando variaveis
	float valor;
	float reajuste;
	float novoValor;
	
    printf("Digite um valor: ");
	scanf("%f",&valor);
	
	reajuste = valor*0.10;
	novoValor = valor+reajuste;

	printf("Com um reajuste de 10%%, o valor passa a ser: R$ %.2f\n", novoValor);

	return 0;
}
