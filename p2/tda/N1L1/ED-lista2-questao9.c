/*
**	Função: Ler uma temperatura em graus Celsius e apresenta-la convertida em Fahrenheit.
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 19/09/2023
**	Observações:
*/

#include <stdio.h>

int main(){

	float c, f;

	printf("Digite a temperatura (em graus Celsius): ");
	scanf("%f", &c);

	f = (c*(9/5))+32;

	printf("\nA temperatura em Fahrenheit corresponde a %g graus.", f);
}