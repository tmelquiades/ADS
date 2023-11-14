/*
**	Função: Calcular a diferença entre duas horas distintas de um mesmo
dia e retornar o intervalo de tempo entre os dois horarios (ler e
imprimir no formato hh:mm)
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 21/09/2023
**	Observações:
*/

#include <stdio.h>

int main() {
  int h1, m1, h2, m2, dh, dm; //dh = diferenca hora; dm = diferenca minuto

  printf("Digite a primeira hora (hh:mm): ");
  scanf("%d:%d", &h1, &m1);

  printf("Digite a segunda hora (hh:mm): ");
	scanf("%d:%d", &h2, &m2);

  dh = h2-h1;
  dm = m2-m1;

  if (dm<0) {
    dm+=60;
		dh--;
  }

  printf("\nA diferença entre as horas é: %dh%dmin", dh, dm);

}
