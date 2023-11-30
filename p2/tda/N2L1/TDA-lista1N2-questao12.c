/**
* Função:  O triangulo de Pascal é um arranjo de números onde o elemento que aparece na
linha i, coluna j (i >= 1, j>=1) é calculado por: (i-1)!/((j-1)!(i-j)!). 
Assim, dado um inteiro n (com n>=1), faça um procedimento para produzir um triângulo de
Pascal com  n linhas. O programa deverá verificar a consistência do dado de entrada e usar
a função fatorial em sua forma recursiva.
** Autor: Thaís Melquíades Macêdo
** Data: 13/11/2023
** Observações:
*/

#include <stdio.h>

int fatorial(int num);
void pascal(int n);

int main() {
		int n;

		printf("Informe o valor de n para gerar o Triângulo de Pascal: ");
		scanf("%d", &n);

		pascal(n);

		return 0;
}

int fatorial(int num) {
		if (num == 0 || num == 1) {
				return 1; 
		} else {
				return num * fatorial(num - 1); 
		}
}

void pascal(int n) {

		if (n < 1) {
				printf("O valor de n deve ser pelo menos 1.\n");
				return;
		}

		for (int i = 0; i < n; i++) {
				for (int j = 0; j <= i; j++) {
						printf("%d ", fatorial(i) / (fatorial(j) * fatorial(i - j)));
				}
				printf("\n");
		}
}