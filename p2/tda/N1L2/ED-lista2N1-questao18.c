/*
** Função: Determinar se um determinado ano lido é bissexto. Sendo que 
um ano é bissexto se fordivisível por 400 ou se for divisível por 4 e 
não for divisível por 100.
** Autor: Thaís Melquíades Macêdo
** Data: 30/09/2023
** Observações:
*/

#include <stdio.h>

int main() {
	
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if ((ano%400==0) || ((ano%4==0) && (ano%100!=0))) {
        printf("%d é um ano bissexto.\n", ano);
    } else {
        printf("%d não é um ano bissexto.\n", ano);
    }

    return 0;
}
