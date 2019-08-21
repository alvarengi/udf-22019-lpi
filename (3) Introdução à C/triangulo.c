#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){
	int area = 0,
		b = 0,
		a = 0;
	
	printf("Base do triangulo: ");
	scanf("%d", &b);
	printf("Altura do triangulo: ");
	scanf("%d", &a);
	
	area = b * a / 2;
	
	printf("Area do triangulo: %d", area);
	
	return 0;
}
