/*
** Função: Dados três valores A, B e C, em que A e B são números reais
e C é um caractere (+ ,- , * , / ou ^ ), pede-se para imprimir o
resultado da operação de A por B se C for um símbolo de operador
aritmético válido(tratar o símbolo); caso contrário deve ser impressa
uma mensagem de operador não definido. Tratar erro de divisão por zero.
Mostrar impressões complementares explicando como funciona a calculadora.
** Autor: Thaís Melquíades Macêdo
** Data: 26/09/2023
** Observações:
*/

#include <stdio.h>
#include <math.h>

int main() {
	
	float a, b, resultado;
	char operador;

	printf("Digite o valor de A: ");
	scanf("%f", &a);
	printf("\nDigite o valor de B: ");
	scanf("%f", &b);
	printf("\nDigite o operador (+, -, *, / ou ^): ");
	scanf(" %c", &operador);

	switch (operador) {
		case '+':
			resultado = a+b;
			printf("O resultado de %.2f + %.2f é %.2f\n", a, a, resultado);
			break;
		case '-':
			resultado = a-b;
			printf("O resultado de %.2f - %.2f é %.2f\n", a, b, resultado);
			break;
		case '*':
			resultado = a*b;
			printf("O resultado de %.2f * %.2f é %.2f\n", a, b, resultado);
			break;
		case '/':
			if (b!=0) {
					resultado = a/b;
					printf("O resultado de %.2f / %.2f é %.2f\n", a, b, resultado);
			} else {
					printf("Erro: Divisão por zero não é permitida.\n");
			}
			break;
		case '^':
			resultado = pow(a, b);
			printf("O resultado de %.2f elevado a %.2f é %.2f\n", a, b, resultado);
			break;
		default:
			printf("Erro: Operador não definido.\n");
	}

	return 0;
}