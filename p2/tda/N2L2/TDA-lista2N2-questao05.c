/*
** Função: Defina uma estrutura que irá representar bandas de música. Essa estrutura deve ter o nome da banda, que 
tipo de música (gênero musical) ela toca, o número de integrantes e em que posição do ranking essa banda está dentre as 
suas 5 bandas favoritas. Criar um novo tipo de dados chamado BandaMusica usando a estrutura criada anteriormente. Defina um 
vetor de Bandas (usando alocação dinâmica) para armazenar todos as suas n bandas preferidas (n digitado pelo usuário). Implementar 
rotinas para ler e escrever registros deste tipo
** Autor: Thaís Melquíades Macêdo	
** Data: 28/11/2023
** Observações:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Banda {
		char nome[50];
		char tipoMusica[50];
		int numIntegrantes;
		int posicaoRanking;
};

typedef struct Banda BandaMusica;

int main() {
		int n;

		printf("Digite o número de suas bandas preferidas: ");
		scanf("%d", &n);

		getchar();

		BandaMusica *bandas = (BandaMusica *)malloc(n * sizeof(BandaMusica));

		if (bandas == NULL) {
				printf("Erro na alocação de memória.\n");
				return 1;
		}

		for (int i = 0; i < n; ++i) {
				printf("\nDigite os detalhes da banda %d:\n", i + 1);

				printf("Nome da banda: ");
				fgets(bandas[i].nome, sizeof(bandas[i].nome), stdin);
				bandas[i].nome[strcspn(bandas[i].nome, "\n")] = '\0'; 

				printf("Tipo de música: ");
				fgets(bandas[i].tipoMusica, sizeof(bandas[i].tipoMusica), stdin);
				bandas[i].tipoMusica[strcspn(bandas[i].tipoMusica, "\n")] = '\0'; 

				printf("Número de integrantes: ");
				scanf("%d", &bandas[i].numIntegrantes);

				printf("Posição no ranking (1 a 5): ");
				scanf("%d", &bandas[i].posicaoRanking);

				getchar();
		}

		printf("\nSuas bandas preferidas:\n");
		for (int i = 0; i < n; ++i) {
				printf("\nBanda %d:\n", i + 1);
				printf("Nome: %s\n", bandas[i].nome);
				printf("Tipo de música: %s\n", bandas[i].tipoMusica);
				printf("Número de integrantes: %d\n", bandas[i].numIntegrantes);
				printf("Posição no ranking: %d\n", bandas[i].posicaoRanking);
		}

		free(bandas);

		return 0;
}