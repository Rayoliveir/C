#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

int main(){
	setlocale(LC_ALL, "");
	
	int numeros[5];
	numeros[0] = 1;
	numeros[1] = 2;
	numeros[2] = 3;	
	numeros[3] = 4;
	numeros[4] = 5;	
	
	printf("Elemento 1: %d\n", numeros[0]);
	printf("Elemento 2: %d\n", numeros[1]);
	printf("Elemento 3: %d\n", numeros[2]);
	printf("Elemento 4: %d\n", numeros[3]);
	printf("Elemento 5: %d\n", numeros[4]);
	
	
	return 0;
}
