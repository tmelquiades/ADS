/*
**	Função: Leia uma velocidade em m/s (metros por segundo) e 
apresenta-la convertida em km/h(quilômetros por hora).
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 20/09/2023
**	Observações:
*/

#include <stdio.h>

int main(){

	float vkmh, vms;

	printf("velocidade em m/s: ");
	scanf("%f", &vms);

	vkmh = vms*3.6;

	printf("\nvelocidade convertida para quilometros/hora: %g", vkmh);

	
}