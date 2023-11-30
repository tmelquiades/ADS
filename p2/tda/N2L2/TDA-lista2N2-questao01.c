/*
** Função: Definir uma estrutura chamada perfil_saude que contenha os seguintes campos:
Nome Completo: string com 80 caracteres
Sexo: um caractere
Data de nascimento: dia, mês e ano separados (DICA: use outra estrutura)
Altura: um número real
Peso: um número real
Faça um programa, em C, que tenha uma função que receba esses dados e os utilize para definir os membros de uma variável perfil_saude. 
O programa deve incluir funções que calculem e retornem a idade atual do usuário em anos, a frequência cardíaca máxima e a frequência 
cardíaca ideal fazendo o cálculo correto caso a pessoa seja homem ou mulher, o índice de Massa Corporal. O programa deverá pedir a
informação da pessoa, criar uma variável do tipo perfil_saude para ela e exibir asinformações dessa variável – o que inclui TODOS os dados.
Em seguida deverá calcular e exibir a idade (em anos), seu IMC, e suas frequências cardíacas máxima e ideal fazendo o cálculo correto caso 
a pessoa seja homem ou mulher. Deverá também exibir a tabela de valores do IMC. Calcular também a expectativa de anos da pessoa (quantos 
anos ela poderá viver ainda), baseado na expectativa de vida da população (sendo homem ou mulher – pesquisar essa informação). Fazer um 
vetor de N (informado pelo usuário) elementos com as informações do exercício acima. Incluir ovetor nas chamadas de funções. (Usar alocação 
dinâmica).
** Autor: Thaís Melquíades Macêdo	
** Data: 28/11/2023
** Observações:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct DataNascimento {
		int dia;
		int mes;
		int ano;
};

struct PerfilSaude {
		char nomeCompleto[80];
		char sexo;
		struct DataNascimento dataNascimento;
		float altura;
		float peso;
};

int calcularIdade(struct PerfilSaude* pessoa) {
		int idade = 2023 - pessoa->dataNascimento.ano;

		if (pessoa->dataNascimento.mes > 11 || (pessoa->dataNascimento.mes == 11 && pessoa->dataNascimento.dia > 30)) {
				idade--;
		}

		return idade;
}

int calcularFrequenciaCardiacaMaxima(struct PerfilSaude* pessoa) {
		return 220 - calcularIdade(pessoa);
}

int calcularFrequenciaCardiacaIdeal(struct PerfilSaude* pessoa) {
		// Supondo que a pessoa esteja em repouso
		float frequenciaMaxima = calcularFrequenciaCardiacaMaxima(pessoa);
		return 0.5 * frequenciaMaxima; 
}

float calcularIMC(struct PerfilSaude* pessoa) {
		return pessoa->peso / (pessoa->altura * pessoa->altura);
}

void exibirInformacoes(struct PerfilSaude* pessoa) {
		printf("Nome: %s\n", pessoa->nomeCompleto);
		printf("Sexo: %c\n", pessoa->sexo);
		printf("Data de Nascimento: %02d/%02d/%04d\n", pessoa->dataNascimento.dia, pessoa->dataNascimento.mes, pessoa->dataNascimento.ano);
		printf("Altura: %.2f m\n", pessoa->altura);
		printf("Peso: %.2f kg\n", pessoa->peso);
}

int calcularExpectativaAnos(struct PerfilSaude* pessoa) {
		int expectativaVidaHomem = 75;
		int expectativaVidaMulher = 80;

		int expectativaVida = (pessoa->sexo == 'M') ? expectativaVidaHomem : expectativaVidaMulher;

		return expectativaVida - calcularIdade(pessoa);
}

int main() {
		int numPessoas;

		printf("Digite o número de pessoas: ");
		scanf("%d", &numPessoas);

		struct PerfilSaude* pessoas = (struct PerfilSaude*)malloc(numPessoas * sizeof(struct PerfilSaude));

		for (int i = 0; i < numPessoas; ++i) {
				printf("\nInforme os dados para a pessoa %d:\n", i + 1);

				printf("Nome Completo: ");
				scanf(" %[^\n]s", pessoas[i].nomeCompleto);
				printf("Sexo (M/F): ");
				scanf(" %c", &pessoas[i].sexo);
				printf("Data de Nascimento (DD MM AAAA): ");
				scanf("%d %d %d", &pessoas[i].dataNascimento.dia, &pessoas[i].dataNascimento.mes, &pessoas[i].dataNascimento.ano);
				printf("Altura (em metros): ");
				scanf("%f", &pessoas[i].altura);
				printf("Peso (em kg): ");
				scanf("%f", &pessoas[i].peso);

				exibirInformacoes(&pessoas[i]);

				printf("\nIdade: %d anos\n", calcularIdade(&pessoas[i]));
				printf("IMC: %.2f\n", calcularIMC(&pessoas[i]));
				printf("Frequência Cardíaca Máxima: %d bpm\n", calcularFrequenciaCardiacaMaxima(&pessoas[i]));
				printf("Frequência Cardíaca Ideal: %d bpm\n", calcularFrequenciaCardiacaIdeal(&pessoas[i]));

				printf("Expectativa de anos restantes: %d anos\n", calcularExpectativaAnos(&pessoas[i]));
		}

		free(pessoas);

		return 0;
}
