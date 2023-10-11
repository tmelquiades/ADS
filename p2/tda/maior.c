#include <stdio.h>

/* Faça uma função que receba 3 numeros e exiba o maior deles
*/

int main(){
	
	int n1, n2, n3, maior;
	
	printf("Digite 3 numeros: ");
	scanf("%d, %d, %d", &n1, &n2, &n3);
	
	maior = calc_maior(n1, n2, n3);
	
	printf("O maior numero eh %d\n", maior);
	
	return 0;
}

int calc_maior(int n1, int n2, int n3){
	
	int maior;
	
	maior = n1;
	
	if(n2>maior){
		maior = n2;
	}
	if(n3>maior){
		maior = n3;
	}
	
	return maior;
	
}
