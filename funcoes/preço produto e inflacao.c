/*solicite o preço de um produto e inflacione esse preço em 10%
se ele for menor que 100 e em 20% se ele for maior ou igual a 100 */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void inflacao(float preco){
	float novoPreco;

	novoPreco = preco < 100 ? preco * 1.1 : preco * 1.2;
	
	return novoPreco;
}
int main(){
	setlocale(LC_ALL, "");
	float valor;
	
	printf("Informe o preco do produto: ");
	scanf("%f",&valor);
	
     inflacao(valor);
	 
	 printf("\nValor a pagar: %.1f", inflacao);
	
	return 0;
}

