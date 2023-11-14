/*
**	Função: Ler uma velocidade em km/h e apresenta-la convertida em m/s.
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 19/09/2023
**	Observações:
*/


#include <stdio.h>

int main(){

	float vkmh, vms;

	printf("Velocidade em km/h: ");
	scanf("%f", &vkmh);

	vms = vkmh/3.6;

	printf("\nVelocidade convertida para m/s: %g", vms);

	
}