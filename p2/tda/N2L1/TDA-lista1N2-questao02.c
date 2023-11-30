/**
* Função: A famosa Conjectura de Goldbach diz que todo inteiro par maior que 2 é a soma de dois outros números primos. 
Testes extensivos foram feitos sem, contudo, ser encontrado um contra-exemplo. Escreva um programa que mostre que a 
afirmação é verdadeira para todo número par entre 700 e 1100. O programa deve imprimir cada número e os primos correspondentes.
** Autor: Thaís Melquíades Macêdo
** Data: 11/11/2023
** Observações:
*/

#include <stdio.h>

int eh_primo(int n);

int main() {
		int inicio = 700;
		int fim = 1100;

		if (inicio %2 != 0) {
				inicio++;
		}

		for (int num_par = inicio; num_par <= fim; num_par += 2) {
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

int eh_primo(int n){
		if (n <= 1) {
				return 0; 
		}

		for (int i = 2; i * i <= n; i++) {
				if (n % i == 0) {
						return 0;
				}
		}

		return 1;
}
