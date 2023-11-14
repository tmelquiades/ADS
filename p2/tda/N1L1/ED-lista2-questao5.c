/*
**	Função: Ler um valor em reais e exibir o equivalente em dólares. A cotação do dia é inserida pelo usuário.
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 19/09/2023
**	Observações:
*/

#include <stdio.h>

int main(){

	float reais, c;

	printf("Valor em R$: ");
	scanf("%f", &reais);
	printf("\nCotação do dia de hoje (para dolar): ");
	scanf("%f", &c);

	printf("O valor em dolar equivale a U$ %g", reais/c);
}