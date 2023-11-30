/**
* Função: Fazer uma função RECURSIVA, float pot(float base, int expoente), para elevar
um numero (base) a outro (expoente). Usar a função em um programa. 
Lembre-se que base^0 = 1, este é o caso básico. E base^n = base x base^(n-1) é o passo 
recursivo.
** Autor: Thaís Melquíades Macêdo
** Data: 12/11/2023
** Observações:
*/

#include <stdio.h>

float pot(float base, int expoente);

int main() {
		float base;
		int expoente;

		printf("Informe a base: ");
		scanf("%f", &base);

		printf("Informe o expoente: ");
		scanf("%d", &expoente);

		float resultado = pot(base, expoente);
		printf("%.2f elevado a %d é: %.2f\n", base, expoente, resultado);

		return 0;
}

float pot(float base, int expoente) {
	
		if (expoente == 0) {
				return 1.0;
		} else {
				return base * pot(base, expoente - 1);
		}
}