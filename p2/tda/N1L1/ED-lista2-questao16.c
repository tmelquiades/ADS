/*
**	Função: Ler um angulo em graus e apresenta-lo convertido em radianos.
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 20/09/2023
**	Observações:
*/

#include <stdio.h>

int main(){

	float graus, rad;

	printf("Informe um angulo em graus: ");
	scanf(" %f", &graus);

	//formula: 1° × pi/180 = 0,01745rad
	rad = graus*(3.1415/180);

	printf("%gº convertido em radianos equivale a %g rad", graus, rad);
	
}