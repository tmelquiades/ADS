/*
** Função: Calcular o IMC que leia o peso do usuário em quilogramas e a
altura em metros e que depois calcule e apresente o IMC e a
classificação (6 tipos).
** Autor: Thaís Melquíades Macêdo
** Data: 26/09/2023
** Observações:
*/

#include <stdio.h>

int main(){
	
	float peso, altura, imc;
	
	printf("Informe seu peso em kg: ");
	scanf("%f", &peso);
	printf("\nInforme sua altura em metros: ");
	scanf("%f", &altura);
	
	imc = peso/(altura*altura);
	
	if (imc<18.5){
		printf("\nBaixo peso");
	} else if ((imc>=18.5) && (imc<25)){
		printf("\nNormal");
	} else if ((imc>=25) && (imc<30)){
		printf("\nSobrepeso");
	} else if ((imc>=30) && (imc<35)) {
		printf("\nObesidade grau I");
	} else if ((imc>=35) && (imc<40)) {
		printf("\nObesidade grau II");
	} else {
		printf("\nObesidade grau III");
	}

	return 0;
}