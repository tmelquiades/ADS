/**
* Função: 
** Autor: Thaís Melquíades Macêdo
** Data: 16/11/2023
** Observações:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_FACES 6

int rolarDado(); 
void tabelaFrequencia(int frequencias[]);

int main() {
		int numJogadas;

		printf("Informe o número de jogadas: ");
		scanf("%d", &numJogadas);

		int frequencias[NUM_FACES] = {0};

		printf("Jogada\tDado1\tDado2\n");

		for (int jogada = 1; jogada <= numJogadas; jogada++) {
				int dado1 = rolarDado();
				int dado2 = rolarDado();

				printf("%d\t%d\t%d\n", jogada, dado1, dado2);

				frequencias[dado1 - 1]++;
				frequencias[dado2 - 1]++;
		}

		printf("\nTabela de Frequências:\n");
		tabelaFrequencia(frequencias);

		return 0;
}

int rolarDado() {
		return rand() % NUM_FACES + 1;
}

void tabelaFrequencia(int frequencias[]) {
		printf("Face\tQuantidade de vezes\n");
		printf("============================\n");

		for (int i = 1; i <= NUM_FACES; i++) {
				printf("%d\t%d\n", i, frequencias[i - 1]);
		}
}