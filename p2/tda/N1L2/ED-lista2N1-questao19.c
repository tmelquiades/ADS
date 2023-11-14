/*
** Função: Ler uma data e determinar se ela é válida. Ou seja, verificar
se o mês está entre 1 e 12, e se o dia existe naquele mês. Note que 
Fevereiro tem 29 dias em anos bissextos, e 28 dias em anos não bissextos
** Autor: Thaís Melquíades Macêdo
** Data: 30/09/2023
** Observações:
*/

#include <stdio.h>

int main() {
	
    int dia, mes, ano;
    
    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mês: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (mes >= 1 && mes <= 12) {
        if ((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && (dia >= 1 && dia <= 31)) {
            printf("Data válida.\n");
        }
        else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && (dia >= 1 && dia <= 30)) {
            printf("Data válida.\n");
        }
        else if (mes == 2) {
            if ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0))) {
                if (dia >= 1 && dia <= 29) {
                    printf("Data válida.\n");
                } else {
                    printf("Data inválida.\n");
                }
            } else {
                if (dia >= 1 && dia <= 28) {
                    printf("Data válida.\n");
                } else {
                    printf("Data inválida.\n");
                }
            }
        } else {
            printf("Data inválida.\n");
        }
    } else {
        printf("Data inválida.\n");
    }

    return 0;
}
