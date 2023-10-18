#include <stdio.h>

float fatorial(int num);
float arranjo(int n, int p);

int main(){
	
	int n=10, p=3, res;
	
	res = arranjo(n, p);
	
	printf("A(%d, %d) = %d", n, p, res);
}

float fatorial(int num){
	
	int i;
	float fat = 1;
	
	for(i=num; i>=1; i--){
		fat = fat * i;
	}
	
	return fat;
	
}

float arranjo(int n, int p){
	
	return fatorial(n)/fatorial(n-p);
}
