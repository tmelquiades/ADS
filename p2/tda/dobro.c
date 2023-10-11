#include <stdio.h>

int main(){
	
	int num, retorno;
	
	printf("Digite um numero: ");
	scanf(" %d", &numero);
	
	retorno = dobro(num);
	
	printf("O dobro de %d é %d", num, retorno);
	
	return 1;
}

int dobro(int numero){
	
	int valor;
	valor = 2*numero;
	
	return valor;
	
}
