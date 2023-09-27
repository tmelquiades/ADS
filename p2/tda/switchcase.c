#include <stdio.h>

int main(){
	
	//aula de switch case
	int escolha;
	
	while(escolha!=3){
		
		printf("---BEM VINDO(A) AO MENU---\n");
		printf("1. Imprimir um 'Ola, Mundo!'\n");
		printf("2. Imprimir saudacao\n");
		printf("3. Sair\n");
		printf("Escolha uma opcao: ");
		scanf(" %d", &escolha);
		
		switch (escolha){
			case 1:
				printf("\nImprimindo...\nOla, Mundo!\n");
				system("pause");
				system("cls");
				break;
			case 2:
				printf("\nImprimindo...\nSaudacao\n");
				system("pause");
				system("cls");
				break;
			case 3:
				printf("\nSaindo do programa...\nFim!\n");
				break;
			default:
				printf("\nErro! Insira uma opcao valida\n");
				system("pause");
				system("cls");
		}
	}
	
	
	
	return 1;
}
