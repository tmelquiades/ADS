/* C�lculo da m�dia e da vari�ncia de n reais */
#include <stdio.h>
#include <stdlib.h>
float media(int n, float v[]);
float variancia(int n, float *v, float med);

int main()
{
    int i, n;
    float *v; // declarando o ponteiro da aloca��o
    float med, var;
    /* leitura do n�mero de valores */
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);
    /* aloca��o din�mica */
    v = (float *)malloc(n * sizeof(float));
    if (v == NULL)
    {
        printf("Memoria insuficiente.\n");
        return 1;
    }
    /* leitura dos valores */
    for (i = 0; i < n; i++)
    {
        printf("Digite a media do %do. aluno: ", i + 1);
        scanf(" %f", &v[i]);
        // scanf(" %f", v + i);
    }
    med = media(n, v);
    var = variancia(n, v, med);
    printf("Media = %f \nVariancia = %f \n", med, var);
    /* libera mem�ria */
    free(v);
    return 0;
}
float media(int n, float *v)
{ // calcula a media de um vetor
    int i;
    float soma;
    soma = 0.0f; // de n elementos
    for (i = 0; i < n; i++)
        soma += v[i];
    return soma / n;
}
float variancia(int n, float *v, float med)
{          // calcula a variancia
    int i; // dada a media
    float s;
    s = 0.0f;               // que eh passada como parametro
    for (i = 0; i < n; i++) // alem do tamanho n do vetor
        s += ((v[i] - med) * (v[i] - med));
    return s / n;
}

