/*
** Função: Escrever um programa que receba três números inteiros como entrada e imprima, como saída, o maior número recebido
** Autor: Thaís Melquíades Macêdo
** Data: 29/09/2023
** Observações:
*/

#include <stdio.h>

int main() {

    int num1, num2, num3;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    int maior = num1;

    if (num2>maior) {
        maior = num2;
    }
    if (num3>maior) {
        maior = num3;
    }

    printf("O maior número é: %d\n", maior);

    return 0;
}
