/*
** Função: Considere uma disciplina que adota o seguinte critério de
aprovação: os alunos fazem duas provas (P1 e P2) iniciais;  se a média
das provas for maior ou igual a 5.0, e se nenhuma das notas for inferior
a 3.0, o aluno passa direto. Caso contrário, o aluno faz uma terceira 
prova (P3) e a média é calculada considera-se a terceira nota e a maior
das notas entre P1 e P2. Neste caso, o aluno é aprovado se a média final
for maior ou igual a 5.0 Escreva um programa em C completo que leia 
inicialmente as duas notas de um aluno, fornecidas pelo usuário via 
teclado. Se as notas não forem suficientes para o aluno passar direto, o 
programa deve capturar a nota da terceira prova, também fornecida via 
teclado. Como saída, o programa deve imprimir a média final do aluno 
seguida da mensagem “Aprovado” ou “Reprovado”, conforme o critério descrito
** Autor: Thaís Melquíades Macêdo
** Data: 29/09/2023
** Observações:
*/

#include <stdio.h>

int main() {

    float p1, p2, p3, media, maior;

    printf("Digite a nota da primeira prova (P1): ");
    scanf("%f", &p1);
    printf("Digite a nota da segunda prova (P2): ");
    scanf("%f", &p2);

    if (p1>=3.0 && p2>=3.0 && (p1+p2)/2 >= 5.0) {
        printf("Média: %.2f\n", (p1 + p2)/2);
        printf("Aprovado\n");
    } else {
        printf("Digite a nota da terceira prova (P3): ");
        scanf("%f", &p3);

        if (p1>p2) {
            maior = p1;
        } else {
            maior = p2;
        }

        media = (maior + p3) / 2;

        if (media>=5.0) {
            printf("Média: %.2f\n", media);
            printf("Aprovado\n");
        } else {
            printf("Média: %.2f\n", media);
            printf("Reprovado\n");
        }
    }

    return 0;
}
