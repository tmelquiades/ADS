/*
**	Função: Leia um valor de comprimento em polegadas e apresenta-lo 
convertido em centímetros.
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 20/09/2023
**	Observações:
*/

#include <stdio.h>

int main(){

	float pol, cm;

	printf("Digite um valor em polegadas: ");
	scanf("%f", &pol);

	cm = pol*2.54;

	printf("%g polegadas equivale a %g centimetros.", pol, cm);
}