/*
** Função: Considere as equações de movimento para calcular a posição 
(s) e a velocidade (v) de uma partícula em determinado instante t, dado 
sua aceleração a, posição inicial e velocidade inicial, de acordo com as 
fórmulas fornecidas.
Escreva um programa em C completo que capture os valores de s0 , v0, a e
t, fornecidos via teclado, e calcule e exiba os valore de s e v. Todos 
os valores tratados no programa devem ser reais (float).
** Autor: Thaís Melquíades Macêdo
** Data: 29/09/2023
** Observações:
*/

#include <stdio.h>

int main() {

    float s, s0, v, v0, a, t;

    printf("Digite a posição inicial (s0): ");
    scanf("%f", &s0);
    printf("Digite a velocidade inicial (v0): ");
    scanf("%f", &v0);
    printf("Digite a aceleração (a): ");
    scanf("%f", &a);
    printf("Digite o tempo (t): ");
    scanf("%f", &t);

    s = s0+v0*t+(a*t*t)/2;
    v = v0+a*t;

    printf("A posição (s) da partícula é: %.2f\n", s);
    printf("A velocidade (v) da partícula é: %.2f\n", v);

    return 0;
}
