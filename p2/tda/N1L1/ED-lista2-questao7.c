/*
**	Função: Ler um número real e imprimir o resultado do quadrado e do cubo desse número.
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 19/09/2023
**	Observações:
*/

#include <stdio.h>

int main(){

	float n;

	printf("Digite um número real: ");
	scanf("%f", &n);

	printf("\nO quadrado desse valor é %f e o cubo é %f", n*n, n*n*n);
}