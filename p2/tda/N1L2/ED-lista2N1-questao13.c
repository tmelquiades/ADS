/*
** Função: Escreva um programa que converta as coordenadas polares (raio r e ângulo a) em coordenadas cartesianas (abscissa x e ordenada y) OBS: Use as funções sin e cos da biblioteca matemática math.h . Considere r como o raio
** Autor: Thaís Melquíades Macêdo
** Data: 29/09/2023
** Observações:
*/

#include <stdio.h>
#include <math.h>

int main() {

    float r, a, x, y;

    printf("Digite o valor do raio: ");
    scanf("%f", &r);
    printf("Digite o valor do ângulo em graus: ");
    scanf("%f", &a);

    a = a*(3.1415/180.0);
    x = r*cos(a);
    y = r*sin(a);

    printf("As coordenadas cartesianas correspondentes são: (%.2f, %.2f)\n", x, y);

    return 0;
}
