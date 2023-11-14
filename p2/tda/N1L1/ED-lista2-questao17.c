/*
**	Função: Ler um angulo em radianos e apresenta-lo convertido em graus.
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 20/09/2023
**	Observações:
*/

#include <stdio.h>

int main(){

	float graus, rad;

	printf("Informe um angulo em radianos: ");
	scanf(" %f", &rad);

	//formula: 1rad × 180/π = 57,296°
	graus = rad*(180/3.1415);

	printf("%g rad convertido em graus equivale a %gº", rad, graus);
	
}