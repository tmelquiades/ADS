#include <stdio.h>

int main (){

    float n1, n2, n3, media;

    printf("Informe as 3 notas, separadas por v�rgula: \n");
    scanf(" %f,%f,%f", &n1, &n2, &n3);

    media = (n1+n2+n3)/3;

    printf("A m�dia do aluno foi %.2f", media);
}
