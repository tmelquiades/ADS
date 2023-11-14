/*
**	Função: Ler uma distância em quilometros e apresenta-la convertida em
milhas.
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 20/09/2023
**	Observações:
*/

#include <stdio.h>

int main(){

	float milhas, km;

	printf("Informe uma distância em quilometros: ");
	scanf(" %f", &km);

	milhas = km/1.609;

	printf("\nA distância equivale a %g milhas.", milhas);
}