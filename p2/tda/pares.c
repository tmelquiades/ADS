#include <stdio.h>

int main(){
	
	int n, cont = 1, soma = 0;
	
	printf("Insira um numero: ");
	scanf(" %d", &n);
	
	while(cont<=n){
		soma=soma+cont;
		cont++;
	}
	
	printf("\nA soma dos numeros do intervalo [0,%d] eh %d\n", n, soma);
}
