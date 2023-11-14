/*
**	Função: Ler o salário de um funcionário e calcular e imprimir o valor do 
novo salario, sabendo que ele recebeu um aumento de 25%
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 20/09/2023
**	Observações:
*/

#include <stdio.h>

int main(){

	float sal, novosal;

	printf("Informe o salário do funcionário: ");
	scanf("%f", &sal);

	novosal = sal+(sal*0.25);

	printf("O novo salário sera de R$%g", novosal);
	
}