/*
** Função: Ler dois números inteiros e calcular quantos % maior um
número é em relação a outro (ou menor, se for o caso)
** Autor: Thaís Melquíades Macêdo
** Data: 29/09/2023
** Observações:
*/

#include <stdio.h>

int main(){

    int n1, n2, diferenca;
    float porcentagem;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    if(n1>n2) {
        diferenca = n1-n2;
        porcentagem = (float)diferenca/n2*100;
        printf("%d é %.2f%% maior que %d\n", n1, porcentagem, n2);
    }else if(n1<n2) {
        diferenca = n2-n1;
        porcentagem = (float)(diferenca)/n1*100;
        printf("%d é %.2f%% menor que %d\n", n1, porcentagem, n2);
    }else{
        printf("Os números são iguais.\n");
    }

	return 0;
}