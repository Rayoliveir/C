/*Crie funções em linguagem C que receba 2 números e
retorne a soma, subtração, divisão e a multiplicação destes
dois números informados.

Obs.: Crie uma função para cada operação.*/

int adicao(int n1, int n2){
	int mais;
	mais=n1+n2;
	return mais;
}

int subtracao(int n1, int n2){
	int menos;
	menos=n1-n2;
	return menos;
}

int multiplicacao(int n1, int n2){
	int vezes;
	vezes=n1*n2;
	return vezes;
}

int divisao(int n1, int n2){
	int por;
	por=n1/n2;
	return por;
}

int main(){
	int resultado1, resultado2, resultado3, resultado4, primeiroNumero, segundoNumero;
	
	printf("\ninforme o primeiro numero: ");
	scanf("%i",&primeiroNumero);
	
	printf("\ninforme o segundo numero: ");
	scanf("%i",&segundoNumero);
	
	resultado1 = subtracao(primeiroNumero, segundoNumero);
	resultado2 = adicao(primeiroNumero, segundoNumero);
	resultado3 = multiplicacao(primeiroNumero, segundoNumero);
	resultado4 = divisao(primeiroNumero, segundoNumero);
	
	printf("\nSoma: %i", resultado2);
	printf("\nSubtracao: %i", resultado1);
	printf("\nMultiplicacao: %i", resultado3);
	printf("\nDivisao: %i", resultado4);
	
	
	
	return 0;
}
