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

    //saída de dados
    printf("\n\nSua idade é %d", idade);
    printf("\nVc tem %.2fm de altura e pesa %.1fkg", altura, peso);

    //operadores aritméticos
    IMC = peso/(altura*altura);
    printf("\nSeu IMC é %.2f\n", IMC);

    if (IMC<18.5){
        printf("\nVc está abaixo do peso\n");
    } else if (IMC>=18.5 && IMC<25){
        printf("\nSeu peso está apropriado\n");
    } else if (IMC>=25 && IMC<30){
        printf("\nVc está acima do peso\n");
    } else {
        printf("\nVc está gigante\n");
    }

    return 0;
}
