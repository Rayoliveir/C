#include <stdio.h>
/*4- Fa�a um algoritmo que solicite do usu�rio um n�mero
inteiro e mostre na tela o seu antecessor e o seu
sucessor.*/
int main(){
	//declarando variaveis
	int numero, antecessor, sucessor;
	
	//solicitando dados
	printf("Informe um numero: ");
	scanf("%i",&numero);
	
	//antecessor ou sucessor
	antecessor = numero - 1;
	sucessor = numero + 1;
	
	//exibindo dados
	printf("\n\nNumero informado: %i",numero);
	printf("\nAntecessor: %i",antecessor);
	printf("\nSucessor: %i", sucessor);
	
	return 0;
}
