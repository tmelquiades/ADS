/**
* Função:  Faça uma função RECURSIVA int quociente(int m, int n) para calcular o valor
inteiro da divisão entre dois inteiros. Lembrando que m/n = q onde q é o número máximo de 
vezes que n pode ser subtraído de m de forma inteira.
** Autor: Thaís Melquíades Macêdo
** Data: 14/11/2023
** Observações:
*/

#include <stdio.h>

int quociente(int m, int n);

int main() {
		int m, n;

		printf("Informe o valor de m: ");
		scanf("%d", &m);

		printf("Informe o valor de n: ");
		scanf("%d", &n);

		int resultado = quociente(m, n);
		printf("O quociente da divisão %d por %d é: %d\n", m, n, resultado);

		return 0;
}

int quociente(int m, int n) {
		
		if (m < n) {
				return 0;
		} else {
				return 1 + quociente(m - n, n);
		}
}