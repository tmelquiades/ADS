/*
** Função: Receber 3 números inteiros como entrada e imprima, como saída, os números em ordem crescente
** Autor: Thaís Melquíades Macêdo
** Data: 29/09/2023
** Observações:
*/

#include <stdio.h>

int main() {

    int num1, num2, num3, aux;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    if (num1>num2) {
        aux = num1;
        num1 = num2;
        num2 = aux;
    }
    if (num2>num3) {
        aux = num2;
        num2 = num3;
        num3 = aux;
    }
    if (num1>num2) {
        aux = num1;
        num1 = num2;
        num2 = aux;
    }

    printf("Os números em ordem crescente são: %d, %d, %d\n", num1, num2, num3);

    return 0;
}