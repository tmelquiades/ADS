#include <stdio.h>

float combinacao(int n, int p);
float fatorial(int num);

int main(){
	
	int n = 10, p = 4, res;
	
	res = combinacao(n, p);
	
	printf("C(%d, %d) = %d", n, p, res);
}

float fatorial(int num){
	
	int i;
	float fat = 1;
	
	for(i=num; i>=1; i--){
		fat = fat * i;
	}
	
	return fat;
	
}

float combinacao(int n, int p){
	
	return fatorial(n)/(fatorial(p)*fatorial(n-p));
}
