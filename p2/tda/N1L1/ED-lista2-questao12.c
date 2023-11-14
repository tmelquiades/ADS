/*
**	Função: Ler uma temperatura em graus Celsius e apresente-a
convertida em Kelvin
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 20/09/2023
**	Observações:
*/

#include <stdio.h>

int main(){

	float k, c;

	printf("Digite uma temperatura em Celsius: ");
	scanf("%f", &c);

	k = 273.15 + c;

	printf("\nA temperatura em Kelvin corresponde a %g graus", k);
	
}