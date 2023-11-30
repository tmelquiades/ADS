/*
** Função: Defina um registro (estrutura - struct) empregado para armazenar os dados (nome, data de nascimento, RG, data de admissão e
salário) de um empregado de uma empresa. Criar um novo tipo de dados chamado Empregado usando a estrutura empregado. Defina um vetor de
empregados (usando alocação dinâmica) para armazenar todos os empregados de sua empresa. Implementar rotinas para ler, escrever e excluir 
registros deste tipo.
** Autor: Thaís Melquíades Macêdo	
** Data: 28/11/2023
** Observações:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Empregado {
		char nome[50];
		char dataNascimento[11]; 
		char RG[15];
		char dataAdmissao[11];    
		float salario;
};

typedef struct Empregado Empregado;

void lerEmpregado(Empregado* empregado) {
		printf("Nome: ");
		scanf(" %[^\n]s", empregado->nome);

		printf("Data de Nascimento (DD/MM/AAAA): ");
		scanf("%s", empregado->dataNascimento);

		printf("RG: ");
		scanf("%s", empregado->RG);

		printf("Data de Admissao (DD/MM/AAAA): ");
		scanf("%s", empregado->dataAdmissao);

		printf("Salario: ");
		scanf("%f", &empregado->salario);
}

void escreverEmpregado(Empregado* empregado) {
		printf("Nome: %s\n", empregado->nome);
		printf("Data de Nascimento: %s\n", empregado->dataNascimento);
		printf("RG: %s\n", empregado->RG);
		printf("Data de Admissao: %s\n", empregado->dataAdmissao);
		printf("Salario: %.2f\n", empregado->salario);
}

void excluirEmpregado(Empregado* empregados, int* numEmpregados, int indice) {
		if (indice < 0 || indice >= *numEmpregados) {
				printf("Índice inválido.\n");
				return;
		}

		for (int i = indice; i < *numEmpregados - 1; ++i) {
				empregados[i] = empregados[i + 1];
		}

		(*numEmpregados)--;
}

void liberarEmpregados(Empregado* empregados) {
		free(empregados);
}

int main() {
		int numEmpregados;

		printf("Digite o número de empregados: ");
		scanf("%d", &numEmpregados);

		Empregado* empregados = (Empregado*)malloc(numEmpregados * sizeof(Empregado));

		for (int i = 0; i < numEmpregados; ++i) {
				printf("\nInforme os dados para o empregado %d:\n", i + 1);
				lerEmpregado(&empregados[i]);
		}

		printf("\nRegistros dos Empregados:\n");
		for (int i = 0; i < numEmpregados; ++i) {
				escreverEmpregado(&empregados[i]);
		}

		excluirEmpregado(empregados, &numEmpregados, 0);

		printf("\nRegistros dos Empregados após exclusão:\n");
		for (int i = 0; i < numEmpregados; ++i) {
				escreverEmpregado(&empregados[i]);
		}

		liberarEmpregados(empregados);

		return 0;
}