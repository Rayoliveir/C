/*Crie um programa que leia 5 n�meros inteiros, utilizando um la�o de repeti��o.
Ap�s solicitar os n�meros para o usu�rio, informe qual � o menor n�mero e o maior n�mero
informado.*/

#include <stdio.h>
#include <locale.h>

#include <stdio.h>

int main(){
	setlocale(LC_ALL, "");
  int i, numero, maior, menor;

  printf("Digite o primeiro n�mero: ");
  scanf("%d", &numero);

  maior = menor = numero;


  for (i = 2; i <= 5; i++){
    printf("Digite o %d� n�mero: ", i);
    scanf("%d", &numero);


    if (numero > maior){
      maior = numero;
    }else if (numero < menor) {
      menor = numero;
    }
  }


  printf("O menor n�mero �: %d\n", menor);
  printf("O maior n�mero �: %d\n", maior);

  return 0;
}
