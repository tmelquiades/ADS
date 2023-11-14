/*
**	Função: Ler um número real e imprimir a quinta parte deste número.
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 19/09/2023
**	Observações:
*/

#include <stdio.h>

int main (){

	float n;

	printf("Digite um numero real: ");
	scanf("%f", &n);

	printf("\nA quinta parte de %g é %f", n, n/5);
}