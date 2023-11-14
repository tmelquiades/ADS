/*
**	Função: Determinar a área e o perímetro de um retângulo.
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 19/09/2023
**	Observações:
*/

#include <stdio.h>

int main(){

	float lado1, lado2, area, p;

	printf("Lado 1: ");
	scanf("%f", &lado1);
	printf("\nLado 2: ");
	scanf("%f", &lado2);

	area = lado1*lado2;
	p = (lado1*2)+(lado2*2);

	printf("\nArea: %g\nPerimetro: %g", area, p);
}