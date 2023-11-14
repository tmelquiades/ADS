/*
**	Função: Ler um valor de área em acres e apresenta-lo
convertido em metros quadrados.
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 20/09/2023
**	Observações:
*/

#include <stdio.h>

int main(){

	float m2, acres;

	printf("Digite o valor da area em acres: ");
	scanf(" %f", &acres);

	m2 = acres*4047;

	printf("%g acres equivale a %g m²", acres, m2);
}