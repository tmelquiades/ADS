/*
**	Função: Ler dois números e informar o dividendo, o divisor, o 
quociente e o resto do primeiro pelo segundo e do segundo pelo primeiro.
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 19/09/2023
**	Observações:
*/


#include <stdio.h>

int main(){

	int n1, n2;

	printf("Primeiro numero: ");
	scanf("%d", &n1);
	printf("\nSegundo numero: ");
	scanf("%d", &n2);

	printf("\n\nDo primeiro numero:\n");
	printf("Dividendo: %d\n", n1);
	printf("Divisor: %d\n", n2);
	printf("Quociente: %d\n", n1/n2);
	printf("Resto: %d\n", n1%n2);

	printf("\n\nDo segundo numero:\n");
	printf("Dividendo: %d\n", n2);
	printf("Divisor: %d\n", n1);
	printf("Quociente: %d\n", n2/n1);
	printf("Resto: %d\n", n2%n1);

}