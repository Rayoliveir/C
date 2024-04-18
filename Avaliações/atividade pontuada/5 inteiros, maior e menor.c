/*Crie um programa que leia 5 números inteiros, utilizando um laço de repetição.
Após solicitar os números para o usuário, informe qual é o menor número e o maior número
informado.*/

#include <stdio.h>
#include <locale.h>

#include <stdio.h>

int main(){
	setlocale(LC_ALL, "");
  int i, numero, maior, menor;

  printf("Digite o primeiro número: ");
  scanf("%d", &numero);

  maior = menor = numero;


  for (i = 2; i <= 5; i++){
    printf("Digite o %dº número: ", i);
    scanf("%d", &numero);


    if (numero > maior){
      maior = numero;
    }else if (numero < menor) {
      menor = numero;
    }
  }


  printf("O menor número é: %d\n", menor);
  printf("O maior número é: %d\n", maior);

  return 0;
}
