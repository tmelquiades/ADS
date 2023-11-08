#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void preenche_vetor(int[]);
void exibe_vetor(int *);

int main(){
	
	int x[MAX];
	
	preenche_vetor(x);
	exibe_vetor(x);
	getchar();
	return 1;
}

void preenche_vetor(int *vet){
	
	int i;
	
	for(i=0; i<MAX; ++i){
		printf("\nDigite o elemento %d do vetor: ", i);
		scanf("%d", &vet[i]);
	}
}

void exibe_vetor(int v[]){
	
	int t;
	
	printf("\nO vetor digitado eh\n");
	for(t=0; t<MAX; t++)
		printf("%-3d", v[t]);
	printf("\n");
}
