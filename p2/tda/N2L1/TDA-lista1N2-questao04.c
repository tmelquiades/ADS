/**
* Função: Implementar uma função — int ePrimo(int num) — que diga se um número é ou não primo.
Em seguida exibir todos os primos entre 2 e um número inserido pelo usuário.
** Autor: Thaís Melquíades Macêdo
** Data: 11/11/2023
** Observações:
*/

#include <stdio.h>

int eh_primo(int num);

int main() {
	
		int N;

		printf("Informe o valor de N: ");
		scanf("%d", &N);

		if (N < 2) {
				printf("N deve ser no mínimo 2\n");
				return 1;
		}

		printf("Números primos entre 2 e %d:\n", N);

		for (int i = 2; i <= N; i++) {
				if (eh_primo(i)) {
						printf("%d\n", i);
				}
		}

		return 0;
}

int eh_primo(int num) {
		if (num < 2) {
				return 0;
		}

		for (int i = 2; i * i <= num; i++) {
				if (num % i == 0) {
						return 0; 
				}
		}

		return 1;
}
