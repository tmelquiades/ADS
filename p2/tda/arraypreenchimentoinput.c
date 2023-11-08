#include <stdio.h>
#include<stdlib.h>
#define MAX 10

int main(){
	int x[MAX];
	int i, t;
	
	for(i=0; i<MAX; ++i){
		printf("\nDigite o elemento %d do vetor: ", i);
		scanf("%d", &x[i]);
	}
	
	printf("\nO vetor digitado eh\n");
	for(t=0; t<MAX; t++)
		printf("%-3d", x[t]);
		
}
