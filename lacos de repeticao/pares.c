//números pares

#include <stdio.h>

int main(){
	int i;
	
	printf("listando numeros pares de 100 a 120 \n");
	
	for(i=100;i<=120;i++){
		if (i%2==0){
			printf("%d \n",i);
		}
	}
	return 0;
}
