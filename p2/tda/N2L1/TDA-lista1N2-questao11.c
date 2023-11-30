/**
* Função: Faça uma função que dado os valores de num e b (ambos inteiros) mostre a 
representação de num no sistema de numeração de base b.
** Autor: Thaís Melquíades Macêdo
** Data: 13/11/2023
** Observações:
*/

#include <stdio.h>

void representacaoEmBase(int num, int b);

int main() {
		int num, base;

		printf("Informe o valor de num: ");
		scanf("%d", &num);

		printf("Informe o valor da base: ");
		scanf("%d", &base);

		representacaoEmBase(num, base);

		return 0;
}

void representacaoEmBase(int num, int b) {

				int aux;

				aux = num;

		if (num == 0) {
				printf("A representação de 0 na base %d é: 0\n", b);
				return;
		}

		int resultado[32]; 
		int indice = 0;

		while (num > 0) {
				resultado[indice] = num % b;
				num /= b;
				indice++;
		}

		printf("A representação de %d na base %d é: ", aux, b);
		for (int i = indice - 1; i >= 0; i--) {
				printf("%d", resultado[i]);
		}
		printf("\n");
}