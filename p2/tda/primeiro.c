#include <stdio.h>

int main (){

    int num;

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    if (num%2==0){
        printf("\n� par");
    } else {
        printf("\n� �mpar");
    }

    return 0;
}
