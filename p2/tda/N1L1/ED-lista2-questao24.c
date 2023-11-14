/*
**	Função: Ler um valor inteiro em segundos e imprimi-lo em horas, minutos e segundos
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 20/09/2023
**	Observações:
*/

#include <stdio.h>

int main(){

	int h, m, s;

	printf("Digite os segundos: ");
	scanf("%d", &s);

	h = s/3600; //1h = 3600s
	s%=3600;
	m = s/60;
	s%=60;

	printf("\nIsso equivale a %d horas, %d minutos e %d segundos.", h, m, s);

}