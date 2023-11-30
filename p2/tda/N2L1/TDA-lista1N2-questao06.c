/**
* Função: Faça um programa em C onde o usuário digite um numero n e a seguir ele exiba todos os numero de 
fibonacci de 0 até o N usando a função geradora.
** Autor: Thaís Melquíades Macêdo
** Data: 12/11/2023
** Observações:
*/

#include <stdio.h>
#include <math.h>

int fibonacci(int n);

int main() {

		int n, i = 0;

		printf("Informe um número: ");
		scanf("%d", &n);

		printf("Números de Fibonacci de 0 até %d:\n", n);

		do{
				printf("%d ", fibonacci(i));
				i++;
		}while(fibonacci(i)<=n);

		return 0;
}

int fibonacci(int n) {

		float o = 1.6180339887498;
		int a;

		a = (pow(o, n) - (pow(-o, -n)))/ sqrt(5);

		return a;
}