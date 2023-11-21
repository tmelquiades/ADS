#include <stdio.h>
#include <stdlib.h>

#define LINHA 4
#define COLUNA 3

int main(){
	int i, j, b[LINHA][COLUNA];
	
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			printf("Digite o elemento b[%d][%d]: ", i+1, j+1);
			scanf("%d", &b[i][j]);
		}
	}
	
	printf("\n\n");
	
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			printf("[%d][%d]: %d\t", i, j, b[i][j]);
		} printf("\n");
	}
	printf("\n\n");
	getchar();
	
}
