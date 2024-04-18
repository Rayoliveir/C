#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int i, numeros[6], pares = 0, impares = 0;
	
	for(i = 0;i < 6;i++){
		printf("Informe um número: ");
		scanf("%i",&numeros[i]);
		
		if(numeros[i] % 2 == 0){
			pares++;
		} else {
				impares++;
			}	
		}
	for(i = 0;i < 6;i++){
		printf ("\nNumeros: %i", numeros[i]);
	}
	
	printf ("\npares: %i", pares);
	printf ("\nimpares: %i", impares);
	
	return 0;
}
