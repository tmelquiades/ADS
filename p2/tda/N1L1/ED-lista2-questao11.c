/*
**	Função: Ler uma temperatura em Kelvin e apresenta-la convertida em Celsius.
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 19/09/2023
**	Observações:
*/

#include <stdio.h>

int main(){

	float k, c;

	printf("Digite uma temperatura em Kelvin: ");
	scanf("%f", &k);

	c = k - 273.15;

	printf("\nA temperatura em Celsius corresponde a %g graus", c);
	
}