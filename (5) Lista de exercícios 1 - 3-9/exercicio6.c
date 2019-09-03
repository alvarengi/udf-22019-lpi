#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a = 0,
		b = 0,
		c = 0;
		
	printf("Informe o valor de a: ");
	scanf("%d", &a);
	printf("Informe o valor de b: ");
	scanf("%d", &b);
	printf("Informe o valor de c: ");
	scanf("%d", &c);
	
	if((a < b+c) && (b < a+c) && (c < a+b)){
		printf("\n%c um tri%cngulo ", 144, 131);
		
		if(a == b && a == c)
			printf("equil%ctero!", 160);
		else if(a == b || a == c || b == c)
			printf("is%cceles!", 162);
		else
			printf("escaleno");
	}
	
	return 0;
}