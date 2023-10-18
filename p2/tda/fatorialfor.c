#include <stdio.h>

float fatorial(int num);

int main(){
	
	int n, resultado;
	
	for(n=1; n<=20; n++){
		printf("%d! = %f\n", n, fatorial(n));
	}
}

float fatorial(int num){
	
	int i;
	float fat = 1;
	
	for(i=num; i>=1; i--){
		fat = fat * i;
	}
	
	return fat;
	
}
