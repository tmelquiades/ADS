/*
** Função: A granja “Frangos Gauss” possui um controle automatizado de
cada frango da sua produção. No pé direito do frango há um anel com um
chip de identificação; no pé esquerdo são dois anéis para indicar o tipo
de alimento que ele deve consumir. Sabendo que o anel com chip custa R$
3,00 e o anel de alimento custa R$ 2,50, faça um programa em C para
calcular o gasto total da granja para marcar todos os seus frangos. (a
quantidade de frangos deve ser lida pelo usuário – valide a quantidade,
ou seja, não pode ser zero nem negativa)
** Autor: Thaís Melquíades Macêdo
** Data: 29/09/2023
** Observações:
*/

#include <stdio.h>

int main() {

    int qtde_frangos;
    float chip=3.0, alimento=2.5, total;

    do{
        printf("Digite a quantidade de frangos: ");
        scanf("%d", &qtde_frangos);
        if(qtde_frangos<=0) {
            printf("Quantidade inválida. Digite um número positivo maior que zero.\n");
        }
    }while(qtde_frangos<=0);

    total=(qtde_frangos*chip)+(qtde_frangos*2*alimento);

    printf("O custo total para marcar todos os frangos é: R$%.2f\n", total);
    
	return 0;
}
