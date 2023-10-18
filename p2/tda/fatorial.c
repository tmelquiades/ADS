#include <stdio.h>

int fatorial(int num);

int main(){
	
	int n, resultado;
	
	printf("Digite um numero inteiro: ");
	scanf(" %d", &n);
	
	resultado = fatorial(n);
	
	printf("%d! = %d", n, resultado);
}

int fatorial(int num){
	
	int i, fat = 1;
	
	for(i=num; i>=1; i--){
		
		fat = fat * i;
	}
	
	return fat;
	
}
