/**
* Função: Criar um programa para ler um vetor com a média dos alunos de uma disciplina de 
uma determinada sala de aula (mínimo de 10 alunos – máximo de 100) – a quantidade de alunos
é inserida pelo usuário. (Testar estes limites: 10 <= n <= 100). Em seguida exibir todas 
as notas (o vetor inteiro), a maior e a menor nota da turma, a média das notas dos alunos, 
quantos alunos ficaram acima da média, quantos ficaram abaixo, quantos ficaram na média e a
variância e o desvio padrão. Usar passagem do vetor para as funções (passagem por referência). 
Não usar variáveis globais em hipótese alguma. Reaproveitar as funções estudadas até aqui.
** Autor: Thaís Melquíades Macêdo
** Data: 15/11/2023
** Observações:
*/

#include <stdio.h>
#include <math.h>

void lerNotas(int n, float notas[]);
void exibirNotas(int n, float notas[]);
float encontrarMaiorNota(int n, float notas[]);
float encontrarMenorNota(int n, float notas[]);
float calcularMedia(int n, float notas[]);
void calcularVarianciaDesvioPadrao(int n, float notas[], float media, float *variancia, float *desvioPadrao);

int main() {
		int n;

		do {
				printf("Informe a quantidade de alunos (entre 10 e 100): ");
				scanf("%d", &n);
		} while (n < 10 || n > 100);

		float notas[n];

		lerNotas(n, notas);

		exibirNotas(n, notas);

		float maior = encontrarMaiorNota(n, notas);
		float menor = encontrarMenorNota(n, notas);

		float media = calcularMedia(n, notas);

		int acimaMedia = 0, abaixoMedia = 0, naMedia = 0;

		for (int i = 0; i < n; i++) {
				if (notas[i] > media) {
						acimaMedia++;
				} else if (notas[i] < media) {
						abaixoMedia++;
				} else {
						naMedia++;
				}
		}
	
		float variancia, desvioPadrao;
		calcularVarianciaDesvioPadrao(n, notas, media, &variancia, &desvioPadrao);

		printf("\nMaior nota: %.2f\n", maior);
		printf("Menor nota: %.2f\n", menor);
		printf("Média das notas: %.2f\n", media);
		printf("Alunos acima da média: %d\n", acimaMedia);
		printf("Alunos abaixo da média: %d\n", abaixoMedia);
		printf("Alunos na média: %d\n", naMedia);
		printf("Variância: %.2f\n", variancia);
		printf("Desvio padrão: %.2f\n", desvioPadrao);

		return 0;
}

void lerNotas(int n, float notas[]) {
		for (int i = 0; i < n; i++) {
				printf("Informe a nota do aluno %d: ", i + 1);
				scanf("%f", &notas[i]);
		}
}

void exibirNotas(int n, float notas[]) {
		printf("Notas dos alunos:\n");
		for (int i = 0; i < n; i++) {
				printf("%.2f ", notas[i]);
		}
		printf("\n");
}

float encontrarMaiorNota(int n, float notas[]) {
		float maior = notas[0];
		for (int i = 1; i < n; i++) {
				if (notas[i] > maior) {
						maior = notas[i];
				}
		}
		return maior;
}

float encontrarMenorNota(int n, float notas[]) {
		float menor = notas[0];
		for (int i = 1; i < n; i++) {
				if (notas[i] < menor) {
						menor = notas[i];
				}
		}
		return menor;
}

float calcularMedia(int n, float notas[]) {
		float soma = 0.0;
		for (int i = 0; i < n; i++) {
				soma += notas[i];
		}
		return soma / n;
}

void calcularVarianciaDesvioPadrao(int n, float notas[], float media, float *variancia, float *desvioPadrao) {
		float somaDiferencasQuadradas = 0.0;

		for (int i = 0; i < n; i++) {
				float diferenca = notas[i] - media;
				somaDiferencasQuadradas += diferenca * diferenca;
		}

		*variancia = somaDiferencasQuadradas / n;
		*desvioPadrao = sqrt(*variancia);
}