/*
**	Função: Usando a equacao de Torricelli, calcular a velocidade de um
corpo em relacao ao espaço que ele percorre.
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 21/09/2023
**	Observações:
*/

#include <stdio.h>
#include <math.h>

int main() {
  
	float Vi, a, s, Vf;

  printf("Digite a velocidade inicial (m/s): ");
	scanf("%f", &Vi);
  printf("\nDigite a aceleração (m/s²): ");
  scanf("%f", &a);
  printf("\nDigite o espaço percorrido (m): ");
  scanf("%f", &s);

  Vf = sqrt((Vi*Vi)+(2*a*s));

	printf("\nA velocidade final é %gm/s", Vf);

}
