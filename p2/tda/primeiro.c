#include <stdio.h>

int main (){

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num%2==0){
        printf("\nÉ par");
    } else {
        printf("\nÉ ímpar");
    }

    return 0;
}
