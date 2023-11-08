#include <stdio.h>
#include <stdlib.h>
#define MAX 100 

int main(){
    int x[MAX];
    int t;
    
    for(t=0; t<MAX; t++)
        x[t]=t*2+1;
    for(t=0; t<MAX; t++)
        printf("%-3d\t", x[t]);
    
    printf("\n");
    getchar();
}
