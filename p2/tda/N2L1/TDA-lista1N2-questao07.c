/**
* Função: Faça uma função para calcular o valor de uma aproximação do número pi, usando a fórmula de Leibiniz.
** Autor: Thaís Melquíades Macêdo
** Data: 12/11/2023
** Observações:
*/

#include <stdio.h>

double pi_aprox(int n);

int main() {
		int n;

		printf("Informe o número de termos para a aproximação de pi: ");
		scanf("%d", &n);

		double resultado = pi_aprox(n);
		printf("Aproximação de pi com %d termos: %.15lf\n", n, resultado);

		return 0;
}


double pi_aprox(int n) {
	
		double resultado = 0.0, termo;

		for (int i = 0; i <= n; i++) {
			if (i % 2 == 0) {
				termo = 1.0;
			} else {
				termo = -1.0;
			}
			
			resultado += termo / (2 * i + 1);
		}

		return 4.0 * resultado;
}
