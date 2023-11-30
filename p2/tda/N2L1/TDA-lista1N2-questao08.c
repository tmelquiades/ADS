/**
* Função: Faça uma função recursiva que implemente o resto da divisão como definido
na questão
** Autor: Thaís Melquíades Macêdo
** Data: 12/11/2023
** Observações:
*/

#include <stdio.h>

int mod(int x, int y);

int main() {
		int x, y;

		printf("Informe o valor de x: ");
		scanf("%d", &x);

		printf("Informe o valor de y: ");
		scanf("%d", &y);

		int resultado = mod(x, y);
	
		printf("O resto da divisão de %d por %d é: %d\n", x, y, resultado);

		return 0;
}

int mod(int x, int y) {
		if (x < y) {
				return x;
		} else if (x == y) {
				return 0;
		} else {
				return mod(x - y, y);
		}
}
