/*
** Função: Fazer conversões entre diferentes unidades. As opções do 
programa devem ser exibidas em forma de um menu apresentado na tela, em 
dois níveis. No primeiro nível, o usuário escolhe a classe de unidade; 
no segundo nível, o usuário escolhe a conversão que deseja, fornecendo 
então, o valor a ser convertido. Por fim, o programa exibe o valor 
resultante na tela. As opções apresentadas no menu são:
- Peso
I. Libra -> Quilograma
II. Quilograma -> Libra
III. Onça -> Grama
IV. Grama -> Onça
- Volume
I. Galão -> Litro
II. Litro -> Galão
III. Onça -> Mililitro
IV. Mililitro -> Onça
- Comprimento
I. Milha -> Quilômetro
II. Quilômetro -> Milha
III. Jardas -> Metro
IV. Metro -> Jardas
** Autor: Thaís Melquíades Macêdo
** Data: 30/09/2023
** Observações:
*/

#include <stdio.h>

int main() {
    int classe, conversao;
    float valor, resultado;

    printf("Escolha a classe de unidade:\n");
    printf("1. Peso\n");
    printf("2. Volume\n");
    printf("3. Comprimento\n");
    scanf("%d", &classe);

    switch (classe) {
        case 1: // Peso
            printf("Escolha a conversão de peso:\n");
            printf("1. Libra para Quilograma\n");
            printf("2. Quilograma para Libra\n");
            printf("3. Onça para Grama\n");
            printf("4. Grama para Onça\n");
            scanf("%d", &conversao);
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);

            switch (conversao) {
                case 1: // Libra para Quilograma
                    resultado = valor * 0.453592;
                    break;
                case 2: // Quilograma para Libra
                    resultado = valor * 2.20462;
                    break;
                case 3: // Onça para Grama
                    resultado = valor * 28.3495;
                    break;
                case 4: // Grama para Onça
                    resultado = valor * 0.03527396;
                    break;
                default:
                    printf("Opção inválida!\n");
                    return 1;
            }
            break;
        case 2: // Volume
            printf("Escolha a conversão de volume:\n");
            printf("1. Galão para Litro\n");
            printf("2. Litro para Galão\n");
            printf("3. Onça para Mililitro\n");
            printf("4. Mililitro para Onça\n");
            scanf("%d", &conversao);
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);

            switch (conversao) {
                case 1: // Galão para Litro
                    resultado = valor * 3.78541;
                    break;
                case 2: // Litro para Galão
                    resultado = valor * 0.264172;
                    break;
                case 3: // Onça para Mililitro
                    resultado = valor * 28.4131;
                    break;
                case 4: // Mililitro para Onça
                    resultado = valor * 0.0351951;
                    break;
                default:
                    printf("Opção inválida!\n");
                    return 1;
            }
            break;
        case 3: // Comprimento
            printf("Escolha a conversão de comprimento:\n");
            printf("1. Milha para Quilômetro\n");
            printf("2. Quilômetro para Milha\n");
            printf("3. Jardas para Metro\n");
            printf("4. Metro para Jardas\n");
            scanf("%d", &conversao);
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);

            switch (conversao) {
                case 1: // Milha para Quilômetro
                    resultado = valor * 1.60934;
                    break;
                case 2: // Quilômetro para Milha
                    resultado = valor * 0.621371;
                    break;
                case 3: // Jardas para Metro
                    resultado = valor * 0.9144;
                    break;
                case 4: // Metro para Jardas
                    resultado = valor * 1.09361;
                    break;
                default:
                    printf("Opção inválida!\n");
                    return 1;
            }
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    printf("Resultado: %.2f\n", resultado);

    return 0;
}