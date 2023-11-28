#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definindo a estrutura para representar bandas de música
struct Banda {
    char nome[50];
    char tipoMusica[50];
    int numIntegrantes;
    int posicaoRanking;
};

// Criando um novo tipo de dados chamado BandaMusica usando a estrutura criada
typedef struct Banda BandaMusica;

int main() {
    int n;

    // Solicitando o número de bandas preferidas ao usuário
    printf("Digite o número de suas bandas preferidas: ");
    scanf("%d", &n);

    // Consumindo a quebra de linha pendente
    getchar();

    // Alocando dinamicamente o vetor de bandas
    BandaMusica *bandas = (BandaMusica *)malloc(n * sizeof(BandaMusica));

    // Verificando se a alocação foi bem-sucedida
    if (bandas == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1; // Encerrando o programa com código de erro
    }

    // Lendo as informações das bandas preferidas
    for (int i = 0; i < n; ++i) {
        printf("\nDigite os detalhes da banda %d:\n", i + 1);

        printf("Nome da banda: ");
        fgets(bandas[i].nome, sizeof(bandas[i].nome), stdin);
        bandas[i].nome[strcspn(bandas[i].nome, "\n")] = '\0';  // Remover a quebra de linha

        printf("Tipo de música: ");
        fgets(bandas[i].tipoMusica, sizeof(bandas[i].tipoMusica), stdin);
        bandas[i].tipoMusica[strcspn(bandas[i].tipoMusica, "\n")] = '\0';  // Remover a quebra de linha

        printf("Número de integrantes: ");
        scanf("%d", &bandas[i].numIntegrantes);

        printf("Posição no ranking (1 a 5): ");
        scanf("%d", &bandas[i].posicaoRanking);

        // Consumindo a quebra de linha pendente
        getchar();
    }

    // Exibindo as informações das bandas preferidas
    printf("\nSuas bandas preferidas:\n");
    for (int i = 0; i < n; ++i) {
        printf("\nBanda %d:\n", i + 1);
        printf("Nome: %s\n", bandas[i].nome);
        printf("Tipo de música: %s\n", bandas[i].tipoMusica);
        printf("Número de integrantes: %d\n", bandas[i].numIntegrantes);
        printf("Posição no ranking: %d\n", bandas[i].posicaoRanking);
    }

    // Liberando a memória alocada para o vetor de bandas
    free(bandas);

    return 0; // Encerrando o programa com sucesso
}
