#include <stdio.h>

int main (){

    float n1, n2, n3, media;

    printf("Informe as 3 notas, separadas por vírgula: \n");
    scanf(" %f,%f,%f", &n1, &n2, &n3);

    media = (n1+n2+n3)/3;

    printf("A média do aluno foi %.2f", media);
}
