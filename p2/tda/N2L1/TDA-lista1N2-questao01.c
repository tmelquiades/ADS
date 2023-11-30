/**
* Função: Escreva uma função chamada int eh_par(int n) que retorne se 1 o número for par e 0 se for ímpar. 
Em seguida use a função em um problema exemplo para mostrar todos os números de 1 até N, sendo digitado 
pelo usuário dizendo se são pares ou ímpares
** Autor: Thaís Melquíades Macêdo
** Data: 11/11/2023
** Observações:
*/

#include <stdio.h>

int eh_par(int n);
	
int main(){
	
	int n, i;

	printf("Informe um numero: ");
	scanf(" %d", &n);

	for(i=1; i<=n; i++){
		if(eh_par(i) == 1){
			printf("%d é par\n", i);
		} else {
			printf("%d é ímpar\n", i);
		}
	}
}

int eh_par(int n){
	if(n%2==0){
		return 1;
	} else {
		return 0;
	}
}