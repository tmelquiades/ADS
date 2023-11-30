/*
** Função: Suponha que uma empresa aérea mantém um cadastro de aeroportos como um vetor de ponteiros para estruturas que 
contêm as seguintes informações:
a. Sigla: string com até 3 caracteres;
b. Cidade: string com até 50 caracteres;
c. Pais: string com até 30caracteres;
d. Taxa: um valor real;
e. Capacidade: um valor inteiro;
Defina uma estrutura em C com o nome de aeroporto, que tenha os campos apropriados para guardar todas as informações descritas 
anteriormente. Defina também um novo tipo de dados com o nome de Aeroporto, correspondendo a essa estrutura. Defina um vetor de 
Aeroportos (usando alocação dinâmica para a quantidade de aeroportos) para armazenar todos os aeroportos que a empresa aérea trabalha. 
Implementar rotinas para ler, escrever e excluir registros deste tipo.
** Autor: Thaís Melquíades Macêdo	
** Data: 28/11/2023
** Observações:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aeroporto {
		char sigla[4];
		char cidade[51];
		char pais[31]; 
		float taxa;
		int capacidade;
};

typedef struct Aeroporto Aeroporto;

void lerAeroporto(Aeroporto* aeroporto) {
		printf("Sigla: ");
		scanf("%3s", aeroporto->sigla);

		printf("Cidade: ");
		scanf(" %[^\n]s", aeroporto->cidade);

		printf("Pais: ");
		scanf(" %[^\n]s", aeroporto->pais);

		printf("Taxa: ");
		scanf("%f", &aeroporto->taxa);

		printf("Capacidade: ");
		scanf("%d", &aeroporto->capacidade);
}

void escreverAeroporto(Aeroporto* aeroporto) {
		printf("Sigla: %s\n", aeroporto->sigla);
		printf("Cidade: %s\n", aeroporto->cidade);
		printf("Pais: %s\n", aeroporto->pais);
		printf("Taxa: %.2f\n", aeroporto->taxa);
		printf("Capacidade: %d\n", aeroporto->capacidade);
}

void excluirAeroporto(Aeroporto* aeroportos, int* numAeroportos, int indice) {
		if (indice < 0 || indice >= *numAeroportos) {
				printf("Índice inválido.\n");
				return;
		}

		for (int i = indice; i < *numAeroportos - 1; ++i) {
				aeroportos[i] = aeroportos[i + 1];
		}

		(*numAeroportos)--;
}

void liberarAeroportos(Aeroporto* aeroportos, int numAeroportos) {
		free(aeroportos);
}

int main() {
		int numAeroportos;

		printf("Digite o número de aeroportos: ");
		scanf("%d", &numAeroportos);

		Aeroporto* aeroportos = (Aeroporto*)malloc(numAeroportos * sizeof(Aeroporto));

		for (int i = 0; i < numAeroportos; ++i) {
				printf("\nInforme os dados para o aeroporto %d:\n", i + 1);
				lerAeroporto(&aeroportos[i]);
		}

		printf("\nRegistros dos Aeroportos:\n");
		for (int i = 0; i < numAeroportos; ++i) {
				escreverAeroporto(&aeroportos[i]);
		}

		excluirAeroporto(aeroportos, &numAeroportos, 0);

		printf("\nRegistros dos Aeroportos após exclusão:\n");
		for (int i = 0; i < numAeroportos; ++i) {
				escreverAeroporto(&aeroportos[i]);
		}

		liberarAeroportos(aeroportos, numAeroportos);

		return 0;
}