/*
**	Função: Ler altura e raio de um cilindro circular e imprimir o volume do
cilindro
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 20/09/2023
**	Observações:
*/

#include <stdio.h>

int main(){

	float h, r, vol;

	printf("Digite o valor da altura do cilindro: ");
	scanf("%f", &h);
	printf("\nDigite o raio: ");
	scanf("%f", &r);

	vol = 3.1415*r*r*h;

	printf("\nO volume do cilindro de altura %g e raio %g é %g.", h, r, vol);
	
}