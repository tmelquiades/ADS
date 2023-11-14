/*
**	Função: Ler um valor de área em metros quadrados e apresenta-lo 
convertido em acres
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 20/09/2023
**	Observações:
*/

#include <stdio.h>

int main(){

	float m2, acres;

	printf("Digite o valor da area em metros quadrados: ");
	scanf(" %f", &m2);

	acres  = m2/4047;

	printf("%g metros quadrados equivale a %g acres", m2, acres);
}