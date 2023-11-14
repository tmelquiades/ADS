/*
** Função: Escreva um programa que implemente o jogo conhecido como
pedra, papel, tesoura. Neste jogo, o usuário e o computador escolhem 
entre pedra, papel ou tesoura. Sabendo que a pedra ganha de tesoura,
papel ganha de pedra e tesoura ganha de papel, exiba na tela o ganhador:
usuário ou computador. Para esta implementação use números aleatórios 
e assuma que o número 0 representa pedra, 1 representa papel e 2 
representa tesoura.
** Autor: Thaís Melquíades Macêdo
** Data: 29/09/2023
** Observações:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int usuario, computador;

    srand(time(NULL));

    computador = rand() % 3;

    printf("Escolha: 0 para pedra, 1 para papel, 2 para tesoura\n");
    printf("Digite sua escolha: ");
    scanf("%d", &usuario);
    printf("Você escolheu: %d\n", usuario);
    printf("Computador escolheu: %d\n", computador);

    if ((usuario == 0 && computador == 2) || (usuario == 1 && computador == 0) || (usuario == 2 && computador == 1)) {
        printf("Você ganhou. Parabéns!\n");
    } else if ((computador == 0 && usuario == 2) || (computador == 1 && usuario == 0) || (computador == 2 && usuario == 1)) {
        printf("Computador ganhou. Tente novamente!\n");
    } else {
        printf("Empate. Jogue novamente para determinar o vencedor.\n");
    }

    return 0;
}
