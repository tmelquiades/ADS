/*
** Função: Ler os coeficientes a, b e c de uma equação de segundo grau
e, antes de calcular as raízes, calcular o delta. Se este for negativo,
informe que a equação não tem solução real. Se for zero, mostra a única
raiz. Se positivo, mostra as duas raízes.
** Autor: Thaís Melquíades Macêdo
** Data: 26/09/2023
** Observações:
*/
#include <stdio.h>
#include <math.h>

int main() {
	
  int a, b, c, delta;
  float r1, r2;

  printf("Digite o valor de a: ");
  scanf("%d", &a);
	printf("\nDigite o valor de b: ");
	scanf("%d", &b);
  printf("\nDigite o valor de c: ");
  scanf("%d", &c);

  if (a==0) {
    printf("O coeficiente a não pode ser igual a zero.\n");
  } else {
    delta = b*b-4*a*c;

    printf("\nDelta: %d\n", delta);

    if (delta<0) {
      printf("A equação não tem solução real.\n");
    } else if (delta==0) {
      r1 = -b/(2*a);
      printf("A raiz da equação é %g.\n", r1);
    } else {
      r1 = (-b+sqrt(delta))/(2*a);
      r2 = (-b-sqrt(delta))/(2*a);
      printf("As raízes da equação são %g e %g.\n", r1, r2);
    }
		
  }

	return 0;
}
