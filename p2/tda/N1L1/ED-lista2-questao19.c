/*
**	Função: Ler um valor de volume em metros cúbicos e apresenta-lo
convertido em litros
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 20/09/2023
**	Observações:
*/

#include <stdio.h>

int main(){

	float m3, l;

	printf("Digite o valor do volume em metros cubicos: ");
	scanf(" %f", &m3);

	l = m3*1000;

	printf("%g metros cubicos equivale a %g litros", m3, l);
}