/*
**	Função: Calcular e imprimir o salario liquido de um professor. Os
dados fornecidos serao o valor da hora/aula, numero de aulas dadas no mes
e percentual de desconto do INSS.
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 21/09/2023
**	Observações:
*/

#include <stdio.h>

int main() {

	float valorhoraaula, bruto, desconto, liquido;
	int qtde_aulas;

	printf("Digite o valor da hora/aula: ");
	scanf("%f", &valorhoraaula);
  printf("\nDigite o número de aulas dadas no mes: ");
  scanf("%d", &qtde_aulas);
  printf("\nDigite o percentual de desconto do INSS: ");
  scanf("%f", &desconto);

  bruto = valorhoraaula*qtde_aulas;

  desconto = (desconto/100)*bruto;
	
	liquido = bruto-desconto;
	
  printf("\nSalário Bruto: R$%g\n", bruto);
  printf("Desconto do INSS: R$%g\n", desconto);
  printf("Salário Líquido: R$%g", liquido);

}
