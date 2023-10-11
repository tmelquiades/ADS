#include <stdio.h>

/* Faça uma função para calcular o cubo de um numero e, usando a função,
exiba o cubo dos 20 primeiros numeros a partir de 1
*/

int main(){
	
	int cu, i;

	for(i=1; i<=20; i++){
		cu = cub(i);
		printf("%d ^ 3 = %d\n", i, cu);
	}
	
	return 0;
}

int cub(numero){
	
	int cubo;
	
	cubo = numero*numero*numero;
	
	return cubo;
	
}
