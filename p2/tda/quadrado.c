#include <stdio.h>

/* Fa�a uma fun��o para calcular o quadrado de um numero e, usando a fun��o,
exiba o quadrado dos 20 primeiros numeros a partir de 1
*/

int main(){
	
	int quad, i;

	for(i=1; i<=20; i++){
		quad = quadrado(i);
		printf("%d ^ 2 = %d\n", i, quad);
	}
	
	return 0;
}

int quadrado(numero){
	
	int quadrado;
	
	quadrado = numero*numero;
	
	return quadrado;
	
}
