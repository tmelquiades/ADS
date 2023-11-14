/*
**	Função: Ler coordenadas x e y de pontos no R2 e calcular sua
distancia da origem (0,0)
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 21/09/2023
**	Observações: utilizei a biblioteca math.h para poder realizar o
calculo da raiz quadrada
*/

#include <stdio.h>
#include <math.h>

int main() {
	
	float x, y, d;

	printf("Digite a coordenada x: ");
	scanf("%f", &x);
	printf("\nDigite a coordenada y: ");
	scanf("%f", &y);

	d = sqrt((x*x)+(y*y));

	printf("\nA distancia da origem (0,0) para o ponto (%g,%g) é %g.", x, y, d);
	
}
