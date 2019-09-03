#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]) {
	int a = 5, b;
	
	scanf("%d", &a);
	
	printf("Seja bem-vindo!\n\n");
	
	printf("a: %d\n\n", a);
	
	a = 15;
	
	printf("a: %d\n", a);
	
	scanf("%d", &b);
	
	printf("b: %d\n\n", b);
	
	system("pause");
}