/*
**	Função: Ler uma temperatura em graus Fahrenheit e apresente-a 
convertida em graus Celsius.
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 19/09/2023
**	Observações:
*/

#include <stdio.h>

int main(){

	float f, c;

	printf("Digite uma temperatura em Fahrenheit: ");
	scanf("%f", &f);

	c = (f-32)/1.8;
	
	printf("\nA temperatura em Celsius corresponde a %g graus", c);
	
}