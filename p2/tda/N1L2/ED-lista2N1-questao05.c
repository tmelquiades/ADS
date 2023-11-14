/*
** Função: Ler três valores inteiros e verifique se eles podem ser os 
lados de um triângulo. Se forem, informar qual o tipo de triângulo que
eles formam: equilátero, isóscele ou escaleno. Propriedade: o
comprimento de cada lado de um triângulo é menor do que a soma dos
comprimentos dos outros dois lados. Triângulo Equilátero: aquele que tem
os comprimentos dos três lados iguais; Triângulo Isóscele: aquele que
tem os comprimentos de dois lados iguais. Portanto, todo triângulo
equilátero é também isóscele; Triângulo Escaleno: aquele que tem os
comprimentos de seus três lados diferentes.
** Autor: Thaís Melquíades Macêdo
** Data: 27/09/2023
** Observações:
*/

#include <stdio.h>

int main() {

    int l1, l2, l3;

    printf("Digite o comprimento do primeiro lado: ");
    scanf("%d", &l1);
    printf("\nDigite o comprimento do segundo lado: ");
    scanf("%d", &l2);
    printf("\nDigite o comprimento do terceiro lado: ");
    scanf("%d", &l3);

    if (l1+l2>l3 && l1+l3>l2 && l2+l3>l1) {
        if (l1==l2 && l2==l3) {
            printf("É um triângulo equilátero.\n");
        } else if (l1==l2 || l1==l3 || l2==l3) {
            printf("É um triângulo isósceles.\n");
        } else {
            printf("É um triângulo escaleno.\n");
        }
    } else {
        printf("Os lados fornecidos não formam um triângulo.\n");
    }
	
	return 0;
}