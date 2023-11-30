/**
* Função: Considere que dispõe de um capital x que rende j de juro ao ano. 
Escreva uma função que dados x e j mostre o capital acumulado com o juro ao final de n anos. (n também é fornecido à função)
** Autor: Thaís Melquíades Macêdo
** Data: 11/11/2023
** Observações:
*/

#include <stdio.h>
#include <math.h>

float capital_acumulado(float x, float j, int n);

int main() {
		float x, j;
		int n;

		printf("Informe o capital inicial: ");
		scanf("%f", &x);

		printf("Informe a taxa de juros ao ano (em decimal): ");
		scanf("%f", &j);

		printf("Informe o número de anos: ");
		scanf("%d", &n);

		float capitalacumulado = capital_acumulado(x, j, n);

		printf("O capital acumulado ao final de %d anos é: %.2f\n", n, capitalacumulado);

		return 0;
}

float capital_acumulado(float x, float j, int n){
	float montante = x*pow(1+j, n);
	return montante;
}