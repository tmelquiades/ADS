/*
** Função: Faça um programa que gerencie o estoque de um mercado e: 
• Crie e leia um vetor de N produtos (sendo N digitado pelo usuário), com os seguintes dados: código (inteiro), nome
(máximo 15 letras), preço e quantidade.
• Leia um pedido, composto por um código de produto e a quantidade. Localize este código no vetor e, se houver quantidade 
suficiente para atender ao pedido integralmente, atualize o estoque e informe o usuário. Repita este processo até ler um
código igual a zero.
** Autor: Thaís Melquíades Macêdo	
** Data: 28/11/2023
** Observações:
*/

#include <stdio.h>
#include <stdlib.h>

struct Produto {
		int codigo;
		char nome[16];
		float preco;
		int quantidade;
};

typedef struct Produto Produto;

int main() {
		int numProdutos;

		printf("Digite o número de produtos: ");
		scanf("%d", &numProdutos);

		Produto* produtos = (Produto*)malloc(numProdutos * sizeof(Produto));

		for (int i = 0; i < numProdutos; ++i) {
				printf("\nInforme os dados para o produto %d:\n", i + 1);
				printf("Código: ");
				scanf("%d", &produtos[i].codigo);
				printf("Nome: ");
				scanf(" %[^\n]s", produtos[i].nome);
				printf("Preço: ");
				scanf("%f", &produtos[i].preco);
				printf("Quantidade: ");
				scanf("%d", &produtos[i].quantidade);
		}

		int codigoPedido;
		int quantidadePedido;

		while (1) {
				printf("\nDigite o código do produto no pedido (ou 0 para sair): ");
				scanf("%d", &codigoPedido);

				if (codigoPedido == 0) {
						break;
				}

				int indiceProduto = -1;
				for (int i = 0; i < numProdutos; ++i) {
						if (produtos[i].codigo == codigoPedido) {
								indiceProduto = i;
								break;
						}
				}
			
				if (indiceProduto == -1) {
						printf("Produto não encontrado.\n");
				} else {
						printf("Digite a quantidade desejada: ");
						scanf("%d", &quantidadePedido);

						if (quantidadePedido <= produtos[indiceProduto].quantidade) {
								produtos[indiceProduto].quantidade -= quantidadePedido;
								printf("Pedido atendido. Valor total: %.2f\n", quantidadePedido * produtos[indiceProduto].preco);
						} else {
								printf("Quantidade em estoque insuficiente.\n");
						}
				}
		}

		free(produtos);

		return 0;
}
