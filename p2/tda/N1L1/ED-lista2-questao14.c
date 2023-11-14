/*
**	Função: Ler uma distância em milhas e apresenta-la convertida em 
quilômetros.
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 20/09/2023
**	Observações:
*/

#include <stdio.h>

int main(){

	float milhas, km;

	printf("Informe uma distância em milhas: ");
	scanf(" %f", &milhas);

	km = milhas*1.60934;

	printf("\nA distância equivale a %g quilometros.", km);
}