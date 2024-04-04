#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>

#define SIZE
#define STRING

int main(){
	setlocale(LC_ALL, "");
	int numeros[2][2];
	
	numeros[0][0] = 1;
	numeros[0][1] = 2;
	numeros[1][0] = 3;
	numeros[1][1] = 4;

	return 0;
}
