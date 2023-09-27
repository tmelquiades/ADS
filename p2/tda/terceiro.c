#include <stdio.h>

int main (){

    int idade;
    float altura, peso, IMC;

    //entrada de dados
    printf("Informe sua idade: ");
    scanf(" %d", &idade);
    printf("\nInforme seu peso: ");
    scanf("%f", &peso);
    printf("\nInforme sua altura: ");
    scanf("%f", &altura);

    //sa�da de dados
    printf("\n\nSua idade � %d", idade);
    printf("\nVc tem %.2fm de altura e pesa %.1fkg", altura, peso);

    //operadores aritm�ticos
    IMC = peso/(altura*altura);
    printf("\nSeu IMC � %.2f\n", IMC);

    if (IMC<18.5){
        printf("\nVc est� abaixo do peso\n");
    } else if (IMC>=18.5 && IMC<25){
        printf("\nSeu peso est� apropriado\n");
    } else if (IMC>=25 && IMC<30){
        printf("\nVc est� acima do peso\n");
    } else {
        printf("\nVc est� gigante\n");
    }

    return 0;
}
