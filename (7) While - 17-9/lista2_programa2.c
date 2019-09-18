#include <stdlib.h>
#include <stdio.h>

void main(){
	int n = 0,
		i = 0;

	printf("Informe a tabuada desejada: ");
	scanf("%d", &n);

	for(i = 1; i <= 10; i++){
		printf("\n%d * %d = %d", n, i, n*i);
	}
}