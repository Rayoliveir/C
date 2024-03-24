//numeros impares

#include <stdio.h>

int main(){
	int i;
	
	printf("listando numeros impares de 1 a 15 \n");
	
	for(i = 1;i<=15;i++){
		if (i%2==1){
			printf("%d \n",i);
		}
	}
	return 0;
}
