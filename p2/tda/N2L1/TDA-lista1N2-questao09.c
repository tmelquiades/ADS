/**
* Função: Faça uma função RECURSIVA para calcular a multiplicação entre dois números 
inteiros. Em seguida, usando esta função, exiba todas as tabuadas de 2 até um número 
digitado pelo usuário.
** Autor: Thaís Melquíades Macêdo
** Data: 12/11/2023
** Observações:
*/

#include <stdio.h>

int multiplicacao(int a, int b);
void exibir_tabuada(int n);

int main() {
		int numero;

		printf("Informe um número para exibir as tabuadas até este número: ");
		scanf("%d", &numero);

		exibir_tabuada(numero);

		return 0;
}

int multiplicacao(int a, int b) {
		if (b == 0) {
				return 0;
		} else {
				return a + multiplicacao(a, b - 1);
		}
}

void exibir_tabuada(int n) {
		for (int i = 2; i <= n; i++) {
				printf("Tabuada de %d:\n", i);
				for (int j = 1; j <= 10; j++) {
						printf("%d x %d = %d\n", i, j, multiplicacao(i, j));
				}
				printf("\n");
		}
}

