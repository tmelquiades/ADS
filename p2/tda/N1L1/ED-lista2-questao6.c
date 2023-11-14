/*
**	Função: Pedir ao usuário para digitar 3 valores inteiros e imprimir a soma deles
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 19/09/2023
**	Observações:
*/

#include <stdio.h>

int main(){

	int n1, n2, n3;

	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("\nDigite o segundo numero: ");
	scanf("%d", &n2);
	printf("\nDigite o terceiro numero: ");
	scanf("%d", &n3);

	printf("\n\nA soma dos 3 valores é %d", n1+n2+n3);

	
}