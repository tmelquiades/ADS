/*
** Função: Ler três valores inteiros e verificar se eles podem ser os
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

    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if (idade>=4 && idade<=7) {
        printf("Categoria: Infantil A\n");
    } else if (idade>=8 && idade<=9) {
        printf("Categoria: Infantil B\n");
    } else if (idade>=10 && idade<=12) {
        printf("Categoria: Juvenil A\n");
    } else if (idade>=13 && idade<=17) {
        printf("Categoria: Juvenil B\n");
    } else if (idade>=18 && idade<=25) {
        printf("Categoria: Sênior\n");
    } else {
        printf("Idade fora da faixa etária\n");
    }
	
	return 0;
}

