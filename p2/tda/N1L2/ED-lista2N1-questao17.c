/*
** Função: Faça um programa que receba um numero inteiro e verifique se
este numero é par ouímpar
** Autor: Thaís Melquíades Macêdo
** Data: 30/09/2023
** Observações:
*/

#include <stdio.h>

int main(){

	int num;

	scanf("%d", &num);

	if (num%2==0){
		printf("%d é par.", num);
	} else {
		printf("%d é ímpar.", num);
	}

	return 0;
}