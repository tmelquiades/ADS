/**
* Função: Escreva um programa que mostre que a Conjectura de Goldbach é verdadeira para todo número par entre 2 e 
um outro numero digitado pelo usuario. O programa deve imprimir cada número e os primos correspondentes.
** Autor: Thaís Melquíades Macêdo
** Data: 11/11/2023
** Observações:
*/

#include <stdio.h>

int eh_primo(int n);

int main() {
	
		int N;

		printf("Informe o valor de N: ");
		scanf("%d", &N);

		if (N < 2) {
				printf("N deve ser no mínimo 2\n");
				return 1;
		}

		for (int num_par = 4; num_par <= N; num_par += 2) {
				printf("Numero par: %d \nPrimos: ", num_par);

				for (int i = 2; i <= num_par / 2; i++) {
						if (eh_primo(i) && eh_primo(num_par - i)) {
								printf("%d + %d ; ", i, num_par - i);
						}
				}

				printf("\n");
		}

		return 0;
}

int eh_primo(int n) {
		if (n < 2) {
				return 0;
		}

		for (int i = 2; i * i <= n; i++) {
				if (n % i == 0) {
						return 0; 
				}
		}

		return 1; 
}