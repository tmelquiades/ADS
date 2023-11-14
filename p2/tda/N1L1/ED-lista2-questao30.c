/*
**	Função: Calcular a densidade de uma substancia dados a massa e o
volume da mesma
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 21/09/2023
**	Observações:
*/

#include <stdio.h>

int main() {
  
	float m, vol, d;

   printf("Digite a massa da substância (kg): ");
  scanf("%f", &m);

  printf("\nDigite o volume da substância (m³): ");
  scanf("%f", &vol);

  d = m/vol;

  printf("\nA densidade da substância é %g kg/m³", d);

}
