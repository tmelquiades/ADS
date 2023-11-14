/*
**	Função: Receber 5 valores inteiros do usuário e mostrar sua média.
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 19/09/2023
**	Observações:
*/


#include <stdio.h>

int main(){

	int v1, v2, v3, v4, v5;
	float media;
	
	printf("Primeiro valor: ");
	scanf("%d", &v1);
	printf("\nSegundo valor: ");
	scanf("%d", &v2);
	printf("\nTerceiro valor: ");
	scanf("%d", &v3);
	printf("\nQuarto valor: ");
	scanf("%d", &v4);
	printf("\nQuinto valor: ");
	scanf("%d", &v5);

	media = (v1+v2+v3+v4+v5)/5;

	printf("\nMédia: %g", media);
	
}