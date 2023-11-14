/*
** Função: Ler o número de identificação, as 3 notas obtidas por um
aluno nas 3 provas. Calcular a média das provas que fazem parte da
avaliação (ME) e calcular (e exibir) a média de aproveitamento, usando a
fórmula MA = (nota1+nota2*3+nota3*3+ME). A atribuição de conceitos
obedece a tabela abaixo:
Média de aproveitamento | Conceito
9,0 - A
7,5 e < 9,0 - B
6,0 e < 7,5 - C
4,0 e < 6,0 - D
< 4,0 - E
O algoritmo deve escrever o número do aluno, suas notas, a média dos 
exercícios, a média de aproveitamento, o conceito correspondente e a 
mensagem: APROVADO se o conceito for A, B ou C e REPROVADO se o conceito
for D ou E.
** Autor: Thaís Melquíades Macêdo
** Data: 27/09/2023
** Observações:
*/

#include <stdio.h>

int main() {

    int num;
    float n1, n2, n3, ME, MA;
    char conceito;
    
    printf("Digite o número de identificação do aluno: ");
    scanf("%d", &num);
    printf("Digite a nota da primeira prova: ");
    scanf("%f", &n1);
    printf("Digite a nota da segunda prova: ");
    scanf("%f", &n2);
    printf("Digite a nota da terceira prova: ");
    scanf("%f", &n3);
    printf("Digite a média dos exercícios: ");
    scanf("%f", &ME);
 
    MA = (n1+n2*3+n3*3+ME)/8;

    if (MA>=9.0) {
        conceito = 'A';
    } else if (MA>=7.5) {
        conceito = 'B';
    } else if (MA>=6.0) {
        conceito = 'C';
    } else if (MA>=4.0) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }

    printf("Número do aluno: %d\n", num);
    printf("Notas: %.2f, %.2f, %.2f\n", n1, n2, n3);
    printf("Média dos exercícios: %.2f\n", ME);
    printf("Média de aproveitamento: %.2f\n", MA);
    printf("Conceito: %c\n", conceito);

    if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
        printf("APROVADO\n");
    } else {
        printf("REPROVADO\n");
    }
	
	return 0;
}